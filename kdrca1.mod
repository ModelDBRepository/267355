TITLE K-DR channel
: from Klee Ficker and Heinemann
: modified to account for Dax et al.
: M.Migliore 1997
:and modified to reproduce the experimental data of Flipis et al. 2022

UNITS {
	(mA) = (milliamp)
	(mV) = (millivolt)

}

PARAMETER {
	v (mV)
        ek (mV)		: must be explicitely def. in hoc
	celsius		(degC)
	gbar=.003 (mho/cm2)
        vhalfn=13   (mV)
        a0n=0.02      (/ms)
        zetan=-3    (1)
        gmn=0.7  (1)
	nmax=2  (1)
	q10=1
	vbr=-20 (mV)
	vbr2=-65 (mV)
	vbr3=5 
}


NEURON {
	SUFFIX Kv7
	USEION k READ ek WRITE ik
	RANGE gkdr, gbar, ik
	GLOBAL ninf,taun, vbr, vbr2, vbr3
}

STATE {
	n
}

ASSIGNED {
	ik (mA/cm2)
        ninf
        gkdr
        taun
}

BREAKPOINT {
	SOLVE states METHOD cnexp
	gkdr = gbar*n
	ik = gkdr*(v-ek)
		if (v>vbr) {ik=0}
			if (v<vbr2) {ik=ik/vbr3}


}

INITIAL {
	rates(v)
	n=ninf
}


FUNCTION alpn(v(mV)) {
  alpn = exp(1.e-3*zetan*(v-vhalfn)*9.648e4/(8.315*(273.16+celsius))) 
}

FUNCTION betn(v(mV)) {
  betn = exp(1.e-3*zetan*gmn*(v-vhalfn)*9.648e4/(8.315*(273.16+celsius))) 
}

DERIVATIVE states {     : exact when v held constant; integrates over dt step
        rates(v)
        n' = (ninf - n)/taun
}

PROCEDURE rates(v (mV)) { :callable from hoc
        LOCAL a,qt
        qt=q10^((celsius-24)/10)
        a = alpn(v)
        ninf = 1/(1+a)
        taun = betn(v)/(qt*a0n*(1+a))
	if (taun<nmax) {taun=nmax}
}














