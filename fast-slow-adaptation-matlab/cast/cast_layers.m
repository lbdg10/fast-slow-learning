% Transform weights from single to double
layers_file = load("layers_file.mat");
input_scaler_file = load("input_scaler_file.mat");
output_scaler_file = load("output_scaler_file.mat");

input_scaler_file.input_scaler.bias = cast(input_scaler_file.input_scaler.bias, "double");
input_scaler_file.input_scaler.scale = cast(input_scaler_file.input_scaler.scale, "double");

output_scaler_file.output_scaler.bias = cast(output_scaler_file.output_scaler.bias, "double");
output_scaler_file.output_scaler.scale = cast(output_scaler_file.output_scaler.scale, "double");

layers_file.layers{1,1}.weights.Wzf = cast(layers_file.layers{1,1}.weights.Wzf, "double");
layers_file.layers{1,1}.weights.Uzf = cast(layers_file.layers{1,1}.weights.Uzf, "double");
layers_file.layers{1,1}.weights.bzf = cast(layers_file.layers{1,1}.weights.bzf, "double");
layers_file.layers{1,1}.weights.Wr = cast(layers_file.layers{1,1}.weights.Wr, "double");
layers_file.layers{1,1}.weights.Ur = cast(layers_file.layers{1,1}.weights.Ur, "double");
layers_file.layers{1,1}.weights.br = cast(layers_file.layers{1,1}.weights.br, "double");
layers_file.layers{1,2}.weights.weight = cast(layers_file.layers{1,2}.weights.weight, "double");
layers_file.layers{1,2}.weights.bias = cast(layers_file.layers{1,2}.weights.bias, "double");
layers_file.layers{1,3}.weights.Wzf = cast(layers_file.layers{1,3}.weights.Wzf, "double");
layers_file.layers{1,3}.weights.Uzf = cast(layers_file.layers{1,3}.weights.Uzf, "double");
layers_file.layers{1,3}.weights.bzf = cast(layers_file.layers{1,3}.weights.bzf, "double");
layers_file.layers{1,3}.weights.Wr = cast(layers_file.layers{1,3}.weights.Wr, "double");
layers_file.layers{1,3}.weights.Ur = cast(layers_file.layers{1,3}.weights.Ur, "double");
layers_file.layers{1,3}.weights.br = cast(layers_file.layers{1,3}.weights.br, "double");
layers_file.layers{1,4}.weights.weight = cast(layers_file.layers{1,4}.weights.weight, "double");
layers_file.layers{1,4}.weights.bias = cast(layers_file.layers{1,4}.weights.bias, "double");
layers_file.layers{1,5}.weights.Wzf = cast(layers_file.layers{1,5}.weights.Wzf, "double");
layers_file.layers{1,5}.weights.Uzf = cast(layers_file.layers{1,5}.weights.Uzf, "double");
layers_file.layers{1,5}.weights.bzf = cast(layers_file.layers{1,5}.weights.bzf, "double");
layers_file.layers{1,5}.weights.Wr = cast(layers_file.layers{1,5}.weights.Wr, "double");
layers_file.layers{1,5}.weights.Ur = cast(layers_file.layers{1,5}.weights.Ur, "double");
layers_file.layers{1,5}.weights.br = cast(layers_file.layers{1,5}.weights.br, "double");
layers_file.layers{1,6}.weights.weight = cast(layers_file.layers{1,6}.weights.weight, "double");
layers_file.layers{1,6}.weights.bias = cast(layers_file.layers{1,6}.weights.bias, "double");
layers_file.layers{1,7}.weights.Wzf = cast(layers_file.layers{1,7}.weights.Wzf, "double");
layers_file.layers{1,7}.weights.Uzf = cast(layers_file.layers{1,7}.weights.Uzf, "double");
layers_file.layers{1,7}.weights.bzf = cast(layers_file.layers{1,7}.weights.bzf, "double");
layers_file.layers{1,7}.weights.Wr = cast(layers_file.layers{1,7}.weights.Wr, "double");
layers_file.layers{1,7}.weights.Ur = cast(layers_file.layers{1,7}.weights.Ur, "double");
layers_file.layers{1,7}.weights.br = cast(layers_file.layers{1,7}.weights.br, "double");
layers_file.layers{1,8}.weights.weight = cast(layers_file.layers{1,8}.weights.weight, "double");
layers_file.layers{1,8}.weights.bias = cast(layers_file.layers{1,8}.weights.bias, "double");
layers_file.layers{1,9}.weights.Wzf = cast(layers_file.layers{1,9}.weights.Wzf, "double");
layers_file.layers{1,9}.weights.Uzf = cast(layers_file.layers{1,9}.weights.Uzf, "double");
layers_file.layers{1,9}.weights.bzf = cast(layers_file.layers{1,9}.weights.bzf, "double");
layers_file.layers{1,9}.weights.Wr = cast(layers_file.layers{1,9}.weights.Wr, "double");
layers_file.layers{1,9}.weights.Ur = cast(layers_file.layers{1,9}.weights.Ur, "double");
layers_file.layers{1,9}.weights.br = cast(layers_file.layers{1,9}.weights.br, "double");
layers_file.layers{1,10}.weights.weight = cast(layers_file.layers{1,10}.weights.weight, "double");
layers_file.layers{1,10}.weights.bias = cast(layers_file.layers{1,10}.weights.bias, "double");
layers_file.layers{1,11}.weights.Wzf = cast(layers_file.layers{1,11}.weights.Wzf, "double");
layers_file.layers{1,11}.weights.Uzf = cast(layers_file.layers{1,11}.weights.Uzf, "double");
layers_file.layers{1,11}.weights.bzf = cast(layers_file.layers{1,11}.weights.bzf, "double");
layers_file.layers{1,11}.weights.Wr = cast(layers_file.layers{1,11}.weights.Wr, "double");
layers_file.layers{1,11}.weights.Ur = cast(layers_file.layers{1,11}.weights.Ur, "double");
layers_file.layers{1,11}.weights.br = cast(layers_file.layers{1,11}.weights.br, "double");
layers_file.layers{1,12}.weights.weight = cast(layers_file.layers{1,12}.weights.weight, "double");
layers_file.layers{1,12}.weights.bias = cast(layers_file.layers{1,12}.weights.bias, "double");

save("input_scaler_file.mat", "input_scaler_file")
save("output_scaler_file.mat", "output_scaler_file")
save("layers_file.mat", "layers_file")