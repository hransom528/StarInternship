function groundCoverageTest(test)
% Custom verification function used by systemTests.mldatx to verify
% compliance with Requirement 1 - "Provide visual imagery"

%  Copyright 2021-2022 The MathWorks, Inc.

    cubeSatModel = systemcomposer.loadModel("asbCubeSatArchModel");
    enterpriseComp = cubeSatModel.lookup("Path", ...
                                         "asbCubeSatArchModel/CubeSat Mission Enterprise");
    startDateJD = getEvaluatedPropertyValue(enterpriseComp, ...
                                            "CubeSatProfile.CubeSatEnterprise.MissionStartDate");
    startDate = datetime(startDateJD, ConvertFrom="juliandate");

    % Use satellite scenario access analysis to confirm sensor images
    % ground station at least once during simulation
    sc = satelliteScenario(startDate, startDate + hours(4), 60);

    % Add ground station to scenario
    gs = groundStation(sc, 42, -71, Name="GroundStation");

    % Add satellite from saved position data
    loggedPos = test.sltest_simout.yout{1}.Values.X_eci;
    sat = satellite(sc, loggedPos, CoordinateFrame="inertial", Name="CubeSat");

    % Point satellite using saved attitude data
    loggedAtt = test.sltest_simout.yout{1}.Values.q_eci2b;
    pointAt(sat, loggedAtt, CoordinateFrame="inertial");

    % Attach camera to satellite
    cs = conicalSensor(sat, MaxViewAngle=6);

    % Perform access analysis between sensor and ground station
    ac = access(cs, gs);
    acStatus = accessStatus(ac);

    % Requirement verification
    test.verifyTrue(any(acStatus));

end
