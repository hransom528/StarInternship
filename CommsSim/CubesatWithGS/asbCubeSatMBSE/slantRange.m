r_eci = [-2981784 5207055 3161595];
v_eci = [0 0 0];
utc = [2019 1 4 12 0 0];
[r_ecef, v_ecef] = eci2ecef(utc, r_eci, v_eci)