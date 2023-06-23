function detectChangeOrbitalElements()
% Update SLDD IC values with changes to stereotype

%  Copyright 2021-2022 The MathWorks, Inc.

    disp("Updating initCond structure with initial values from stereotypes defined in:");
    cubeSatModel = systemcomposer.loadModel("asbCubeSatArchModel");

    % Get stereotype values
    disp("  asbCubeSatArchModel/CubeSat Mission Enterprise (CubeSatProfile.CubeSatEnterprise)");
    enterpriseComp = cubeSatModel.lookup("Path", ...
                                         "asbCubeSatArchModel/CubeSat Mission Enterprise");
    startDateStereo = getEvaluatedPropertyValue(enterpriseComp, ...
                                                "CubeSatProfile.CubeSatEnterprise.MissionStartDate");

    disp("  asbCubeSatArchModel/CubeSat Mission Enterprise/Space Segment/CubeSat Initial Orbit (CubeSatProfile.Orbit)");
    orbitComp = cubeSatModel.lookup("Path", ...
                                    "asbCubeSatArchModel/CubeSat Mission Enterprise/Space Segment/CubeSat Initial Orbit");
    semiMajorAxisStereo = getEvaluatedPropertyValue(orbitComp, ...
                                                    "CubeSatProfile.Orbit.semiMajorAxis");
    eccentricityStereo = getEvaluatedPropertyValue(orbitComp, ...
                                                   "CubeSatProfile.Orbit.eccentricity");
    inclinationStereo = getEvaluatedPropertyValue(orbitComp, ...
                                                  "CubeSatProfile.Orbit.inclination");
    argOfPeriapsisStereo = getEvaluatedPropertyValue(orbitComp, ...
                                                     "CubeSatProfile.Orbit.argOfPeriapsis");
    raanStereo = getEvaluatedPropertyValue(orbitComp, ...
                                           "CubeSatProfile.Orbit.rightAscensionAscendingNode");
    trueAnomalyStereo = getEvaluatedPropertyValue(orbitComp, ...
                                                  "CubeSatProfile.Orbit.trueAnomaly");

    disp("  asbCubeSatArchModel/CubeSat Mission Enterprise/Space Segment/CubeSat Initial Attitude (CubeSatProfile.Attitude)");
    attComp = cubeSatModel.lookup("Path", ...
                                  "asbCubeSatArchModel/CubeSat Mission Enterprise/Space Segment/CubeSat Initial Attitude");
    eulerStereo = getEvaluatedPropertyValue(attComp, ...
                                            "CubeSatProfile.Attitude.eulerAngles");
    pqrStereo = getEvaluatedPropertyValue(attComp, ...
                                          "CubeSatProfile.Attitude.bodyRates");

    % Update initCond structure in asbCubeSatModelData.sldd
    computeCubeSatState([], "Keplerian Orbital Elements", startDateStereo, 2451545.0, ...
                        semiMajorAxisStereo, eccentricityStereo, inclinationStereo, ...
                        raanStereo, argOfPeriapsisStereo, trueAnomalyStereo, 0, 0, 0, eulerStereo, pqrStereo);

    disp("Update complete.")

end
