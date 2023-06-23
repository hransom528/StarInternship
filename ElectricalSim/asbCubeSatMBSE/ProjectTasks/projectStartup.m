function projectStartup
% projectStartup Initialize CubeSat MBSE Model

%  Copyright 2021-2022 The MathWorks, Inc.


% Close model asbCubeSat opened by referenced CubeSat Simulation Project startup
    if bdIsLoaded("asbCubeSat")
        close_system("asbCubeSat");
    end

    % Open Architecture model
    open_system("asbCubeSatArchModel");

    % Initialize visualization control
    mydataDict = Simulink.data.dictionary.open("asbCubeSatModelData.sldd");
    dDataSectionObj = getSection(mydataDict,"Design Data");
    if ~builtin("license","test","Virtual_Reality_Toolbox")
        if evalin(dDataSectionObj, "variantVisualization") == 1
            evalin(dDataSectionObj,"variantVisualization = 0;"); % Disable SL3D animation
        else
            close(mydataDict);
        end
    else
        % Open the animation window
        load_system("asbCubeSatVisualization");
        vrmfunc('FnOpen',getSimulinkBlockHandle("asbCubeSatVisualization/Visualization/Virtual Reality World/VR Sink"));
        close(mydataDict);
    end

end
