# Online Model Quality Monitoring of Adaptive Ensemble Recurrent Neural Networks with Gaussian Process Correction

This repository contains the implementation of an **adaptive data-based modelling framework** for nonlinear dynamical systems based on **ensemble recurrent neural networks (RNNs)**, **statistical model quality monitoring**, and **online plant-model mismatch compensation**.

The proposed framework addresses the challenge of maintaining accurate predictive models under changing operating conditions. Model quality is continuously monitored using a **Hotelling control chart** applied to the modelling errors. When the prediction error is statistically inconsistent with the expected benchmark behaviour, the framework evaluates whether the current operating condition is sufficiently different from the operating regions represented in the training dataset. If a novel operating condition is detected, a new recurrent neural network model is added to the ensemble, allowing the model set to progressively adapt to previously unseen regions of operation. In parallel with this structural adaptation, the framework performs **online correction of plant-model mismatch** through a **Gaussian Process (GP)** model, which compensates for residual modelling errors and improves prediction accuracy without requiring immediate retraining of the neural network models.

The repository includes:
- Python implementations for offline training of the recurrent neural network models composing the ensemble.
- A MATLAB/Simulink implementation of the complete monitoring and adaptive modelling framework, including ensemble prediction, Gaussian Process correction, and adaptation mechanisms.


## Repository structure


## Ensemble recurrent neural network models

The `rnn-python` folder contains the Python implementation used to train the recurrent neural network models that form the initial model ensemble. Each neural network is trained offline on a specific region of the operating space, allowing the ensemble to represent different system behaviours under different operating conditions.


## Fast and slow adaptation framework

The `fast-slow-adaptation-matlab` folder contains the complete MATLAB/Simulink implementation of the monitoring and adaptive modelling framework.

## Model quality monitoring

The framework continuously evaluates the quality of the ensemble predictions using a **Hotelling control chart**. The monitoring procedure analyses the modelling errors and compares their statistical properties against an expected benchmark distribution. When the modelling error becomes statistically abnormal, the framework triggers an adaptation procedure. If the operating condition is statistically distant from all available training regions, a new model is generated and added to the ensemble.

### Slow adaptation: Ensemble expansion

When the monitoring algorithm detects a persistent mismatch caused by a new operating condition, a new RNN model is added to the ensemble.

### Fast adaptation: Gaussian Process correction

A Gaussian Process model is used to compensate online for plant-model mismatch.
