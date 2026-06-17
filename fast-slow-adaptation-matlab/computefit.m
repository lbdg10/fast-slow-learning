function FIT = computefit(y_id, y_real)
    washout = 1; %18;
    FIT = zeros(size(y_id,1),1);
    num = zeros(size(y_id,1),size(y_id,2)-washout);
    den = zeros(size(y_id,1),size(y_id,2)-washout);
    for j = 1:size(y_id,1)
        for i = washout:size(y_id,2)
            num(j,i-washout+1) = norm(y_id(j,i)-y_real(j,i), 2) ;
            den(j,i-washout+1) = norm(y_real(j,i)-mean(y_real(j,:)), 2);
        end
        FIT(j) = 100*(1-(sum(num(j,:))/sum(den(j,:))));
    end
end