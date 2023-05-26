#include <stdio.h>
#include "hocdec.h"
#define IMPORT extern __declspec(dllimport)
IMPORT int nrnmpi_myid, nrn_nobanner_;

extern void _CaH_reg();
extern void _CaT_reg();
extern void _Kca_reg();
extern void _Kv_reg();
extern void _Kv1_axonal_reg();
extern void _SK_reg();
extern void _ca_h_reg();
extern void _ca_r_reg();
extern void _cdp5_reg();
extern void _cdp5r_reg();
extern void _curclamp_reg();
extern void _h_reg();
extern void _kdrca1_reg();
extern void _na12_reg();
extern void _na16_reg();
extern void _na8st_reg();
extern void _nadifl_reg();
extern void _nax8st_reg();
extern void _skbk_reg();
extern void _undernai_reg();

void modl_reg(){
	//nrn_mswindll_stdio(stdin, stdout, stderr);
    if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
	fprintf(stderr, "Additional mechanisms from files\n");

fprintf(stderr," CaH.mod");
fprintf(stderr," CaT.mod");
fprintf(stderr," Kca.mod");
fprintf(stderr," Kv.mod");
fprintf(stderr," Kv1_axonal.mod");
fprintf(stderr," SK.mod");
fprintf(stderr," ca_h.mod");
fprintf(stderr," ca_r.mod");
fprintf(stderr," cdp5.mod");
fprintf(stderr," cdp5r.mod");
fprintf(stderr," curclamp.mod");
fprintf(stderr," h.mod");
fprintf(stderr," kdrca1.mod");
fprintf(stderr," na12.mod");
fprintf(stderr," na16.mod");
fprintf(stderr," na8st.mod");
fprintf(stderr," nadifl.mod");
fprintf(stderr," nax8st.mod");
fprintf(stderr," skbk.mod");
fprintf(stderr," undernai.mod");
fprintf(stderr, "\n");
    }
_CaH_reg();
_CaT_reg();
_Kca_reg();
_Kv_reg();
_Kv1_axonal_reg();
_SK_reg();
_ca_h_reg();
_ca_r_reg();
_cdp5_reg();
_cdp5r_reg();
_curclamp_reg();
_h_reg();
_kdrca1_reg();
_na12_reg();
_na16_reg();
_na8st_reg();
_nadifl_reg();
_nax8st_reg();
_skbk_reg();
_undernai_reg();
}
