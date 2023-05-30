NEURON model files from the paper 
Luiza Filipis, Laila Ananda Blömer, Jérôme Montnach, Michel De Waard, Marco Canepari
Nav1.2 and BK channels interaction shapes the action potential in the axon initial segment
 
Starting from the model of Hallermann et al.2012 the axon was modified to reproduce our 
experimental results while the rest of the neuron was intact.

Use the mosinit file to run the model.

To reproduce Figure 6, use the different buttons that appear to run the control experiment, the huwentoxin experiment, 
the apamin experiment, the iberiotoxin experiment or the VGCCs block accordingly.

The experimental data we used to fit the sodium, calcium and Voltage are included.

For this model we used NEURON 8.0 on Windows environment. 


Questions regarding this model should be directed to
luiza.filipis@univ-grenoble-alpes.fr 
or
marco.canepari@univ-grenoble-alpes.fr

Changelog
---------
2023-05-30: fix for compatibility with the upcoming NEURON 9 release,
            specifically neuronsimulator/nrn#1992 on GitHub.
