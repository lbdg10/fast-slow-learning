% Function to compute the Mahalanobis Distance
function d = mahalanobis_distance_multi(data_new, data_ref)
    % data_new: A matrix where each row is a data point to compute the distance for.
    % data_ref: A matrix where each row is a data point in the dataset.
    
    % Step 1: Compute the mean of the data_ref
    mu = mean(data_ref, 1);
    
    % Step 2: Compute the covariance matrix
    S = cov(data_ref);
    
    % Step 3: Compute the inverse of the covariance matrix
    S_inv = inv(S);
    
    % Step 4: Compute the Mahalanobis distance for each point in data_new
    d = zeros(size(data_new, 1), 1); % Preallocate distance vector
    for i = 1:size(data_new, 1)
        diff = data_new(i, :) - mu;          % Difference vector for the i-th point
        d(i) = sqrt(abs(diff * S_inv * diff')); % Compute the Mahalanobis distance
    end
    d = mean(d);
end
% 
% % Example Usage:
% % Define a dataset
% data_ref = [2.5 3.1; 3.6 3.8; 3.9 4.2; 4.5 5.1];
% 
% % Points to compute the distance for (each row is a point)
% data_new = [3.0 4.0; 4.0 5.0; 2.7 3.2];
% 
% % Compute the Mahalanobis Distances
% distances = mahalanobis_distance_multi(data_new, data_ref);
% distance_function = mean(sqrt(mahal(data_new,data_ref)));
% 
% % Display the results
% disp('The Mahalanobis distances are:');
% disp(distances);
% 
% disp('The Mahalanobis distance is: ');
% disp(distance_function);