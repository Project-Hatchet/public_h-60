class SensorTemplatePassiveRadar;
class SensorTemplateDataLink;
class CfgVehicles
{
    #include "crew.hpp"
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F: Helicopter_Base_H
    {
    	#include "cfgUVAnimations.hpp"
        class Turrets
        {
            class MainTurret;
            class CopilotTurret;
        };
        class Eventhandlers;
        class Viewoptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;
        class CargoTurret;
        class Components;
        class Sounds;
        class HitPoints;
    };

    class vtx_H60_base: Heli_Transport_01_base_F
    {
        #include "cfgVxf.hpp"
        memoryPointDriverOptics = "slingcam";
        driverWeaponsInfoType = "Rsc_MELB_Turret_UnitInfo";
        class vtx_templateFLIR {
            #include "turrets\pilotCamera.hpp"
        };
        scope=1;
        category = "Air";
        editorSubcategory = "vtx_h60";
        side = 1;
        faction = "BLU_F";
        //armor = 500;
        altFullForce = 1500;	/// in what height do the engines still have full thrust
        altNoForce = 4000;		/// thrust of the engines interpolates to zero between altFullForce and altNoForce
        maxSpeed = 300;			/// what is the maximum speed of the vehicle
        maxFordingDepth = 0.55;	/// how deep could the vehicle be in water without getting some damage
        mainBladeRadius = 7.0;	/// describes the radius of main rotor - used for collision detection
        fuelConsumptionRate = 0;
        //multiplier of lift force
        liftForceCoef = 1.1;
        //multiplier of body friction
        bodyFrictionCoef = 0.7;
        //multiplier of bank force
        cyclicAsideForceCoef = 1.0;
        //multiplier of dive force
        cyclicForwardForceCoef = 1.0;
        //multiplier of back rotor force
        backRotorForceCoef = 1.0;
        simulation = "helicopterRTD";
        #include "cfgVehiclesParts\RotorLibHelicopterProperties.hpp"
        #include "cfgVehiclesParts\sounds.hpp"
        #include "cfgVehiclesParts\slingload.hpp"
        #include "cfgVehiclesParts\UI.hpp"
        #include "cfgVehiclesParts\components.hpp"
        #include "cfgVehiclesParts\reflectors.hpp"
        #include "cfgVehiclesParts\fries.hpp"
        #include "cfgVehiclesParts\hitPoints.hpp"
        //#include "cfgVehiclesParts\vehicleCustomization.hpp"

        irTargetSize = 1.2;
        radarTargetSize = 1.2;

        hiddenSelections[] = {
                "emmisive_overhead",
                "emmisive_frontDash",
                "emmisive_pedestal",
                "emmisive_ralt",
                "emmisive_altp",
                "emmisive_alt",
                "emmisive_ias",
                "emmisive_hdg",
                "MAP_MFD1",
                "MAP_MFD2",
                "MAP_MFD3",
                "MAP_MFD4",
                "MAP_OVERLAY1",
                "MAP_OVERLAY2",
                "MAP_OVERLAY3",
                "MAP_OVERLAY4",
                "Exterrior_Hull",
                "Exterrior_Misc",
                "Exterrior_Tail",
                "markings",
                "left_num_1",
                "left_num_2",
                "right_num_1",
                "right_num_2",
                "Fuel_Probe"
        };
        hiddenSelectionsTextures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
                "z\vtx\addons\UH60\Data\Exterior\Markings\Markings_ca.paa",
                "", // "left_num_1",
                "", // "left_num_2",
                "", // "right_num_1",
                "", // "right_num_2",
                "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa"
        };
        hiddenSelectionsMaterials[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "z\vtx\addons\UH60\data\exterior\hull main.rvmat",
                "z\vtx\addons\UH60\data\exterior\misc.rvmat",
                "z\vtx\addons\UH60\data\exterior\hull tail.rvmat",
                ""
        };
        A3TI_ThermalSelections[] = {16, 17, 18};
        accuracy = 0.5;
        model = "\z\vtx\addons\UH60\vtx_UH60.p3d";
        displayName = "UH-60M Blackhawk";



        icon = "z\vtx\addons\UH60\Data\UI\Map_vtx_UH60_CA.paa";	/// icon in map/editor
        picture = "z\vtx\addons\UH60\Data\UI\vtx_UH60_CA.paa";	/// small picture in command menu

        driverInAction = UH60_Pilot;
        driverAction = UH60_Pilot;
        driverRightHandAnimName="Cyclic_right";
	driverLeftHandAnimName="Collective_right";
	driverLeftLegAnimName="Pedal_Left_P";
	driverRightLegAnimName="Pedal_Right_P";
        precisegetinout = 0;
        transportSoldier = 11;

        crew = vtx_uh60_pilot;
        typicalCargo[]={vtx_uh60_doorgunner,vtx_uh60_doorgunner,vtx_uh60_doorgunner};
        gunnerAction = UH60_Gunner;
        gunnerInAction = UH60_Gunner;
        transportMaxBackpacks = 11;
		cargoAction[] = {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_leanleft", "passenger_generic01_leanright", "passenger_generic01_foldhands", "passenger_mantisrear", "passenger_mantisrear", "passenger_generic01_foldhands"};

        cargoIsCoDriver[]={0,0};
        memoryPointsGetInDriver    = "pos Driver";
        memoryPointsGetInDriverDir    = "pos Driver dir";
        memoryPointsGetInCargo[] = {"pos codriver","pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir","pos cargo dir"};
        hideWeaponsCargo = 1;
        cargoCanEject = 1;
        driverCanEject = 0;
        selectionHRotorStill	="rotorBlades";
		selectionHRotorMove		="rotorBlurred";
        selectionVRotorStill	="VrotorBlades";
		selectionVRotorMove		="VrotorBlurred";
        mainRotorSpeed = 1.0;
	    backRotorSpeed = 1.5;

        memoryPointsGetInGunner= "pos gunner";
        memoryPointsGetInGunnerDir= "pos gunner dir";

        #include "MFD\MFDConfig.hpp"
        class MarkerLights{
                class CollisionRedTailLower{
                        activeLight = 0;
                        ambient[] = {100,0,0};
                        blinking = 1;
                        blinkingPattern[] = {0.2,1.3};
                        blinkingPatternGuarantee = 0;
                        color[] = {0.9,0.15,0.1};
                        dayLight = 0;
                        drawLight = 1;
                        drawLightCenterSize = 0.08;
                        drawLightSize = 0.5;
                        intensity = 500;
                        name = "light_collision_tail_lower";
                        useFlare = 1;
                };
                class CollisionRedTailUpper{
                        activeLight = 0;
                        ambient[] = {100,0,0};
                        blinking = 1;
                        blinkingPattern[] = {0.2,1.3};
                        blinkingPatternGuarantee = 0;
                        color[] = {0.9,0.15,0.1};
                        dayLight = 0;
                        drawLight = 1;
                        drawLightCenterSize = 0.08;
                        drawLightSize = 0.5;
                        intensity = 500;
                        name = "light_collision_tail_upper";
                        useFlare = 1;
                };
        };

        class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
        {
            PILOTVIEW
        };

		LODDriverOpticsIn = 1100;

        class TransportMagazines
        {
            mag_xx(SmokeShellGreen,2);
            mag_xx(SmokeShell,2);
        };

        class TransportWeapons{};
        radarType = 4;

        weapons[]={CMFlareLauncher};
        magazines[]={60Rnd_CMFlareMagazine};
        lockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
        incommingMisslieDetectionSystem = CM_none; // or CM_Missile;

        class Damage
        {
            tex[]={};
            mat[]={
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_engine.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_engine.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_engine_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_fuselage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_fuselage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_fuselage_destruct.rvmat",

             //    "z\vtx\addons\UH60\Data\uh60m_interior.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_interior.rvmat",
             //    "z\vtx\addons\UH60\Data\uh60m_interior_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_navijak.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_navijak.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_navijak_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_glass.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_glass_damage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_glass_damage.rvmat",

            };
        };
        class Turrets: Turrets
        {
            #include "turrets\copilot.hpp"
        };
        class Exhausts
        {
                class ExhaustEngineLeft
                {
                        position = "exh_leng_pos";
                        direction = "exh_leng_dir";
                        effect = "ExhaustsEffectHeliMed";
                };
                class ExhaustEngineRight
                {
                        position = "exh_reng_pos";
                        direction = "exh_reng_dir";
                        effect = "ExhaustsEffectHeliMed";
                };
        };
        #include "cfgAnimationSources.hpp"
        gearRetracting		= 0;
        gearMinAlt			= 999999;
        turnCoef			= 1.6;
        terrainCoef 		= 1;
        damperSize 			= 1;
        damperForce 		= 10;
        damperDamping 		= 100;
        wheelWeight 		= 30;

        driveOnComponent[]=
        {
            wheels
        };
        minOmega	= 0;
        maxOmega=2000;
        class Wheels
        {
            class Wheel_1
            {
                steering					= false;
                side						= "left";
                boneName					= "wheel_1_1";
                suspForceAppPointOffset		= "wheel_1_1_center";
                tireForceAppPointOffset		= "wheel_1_1_center";
                center						= "wheel_1_1_center";
                boundary					= "wheel_1_1_rim";
                width						= 0.3;
                mass						= 15;
                MOI							= 30;

                dampingRate					= 0.1;
                dampingRateDamaged			= 1.0;
                dampingRateDestroyed		= 1000.0;
                suspTravelDirection[]		= {0, -1, 0};

                maxBrakeTorque				= 1500;
                maxHandBrakeTorque			= 0;

                maxCompression				= 0.2;
                maxDroop					= 0.05;

                sprungMass					= 4000;
                springStrength				= 90000;
                springDamperRate			= 4000;

                longitudinalStiffnessPerUnitGravity	= 10000;
                latStiffX					= 2.5;
                latStiffY					= 18.0;
                frictionVsSlipGraph[]=
                {
                    {0,1},
                    {0.5,1},
                    {1,1}
                };
            };
            class Wheel_2: Wheel_1
            {
                boneName					= "wheel_1_2";
                suspForceAppPointOffset		= "wheel_1_2_center";
                tireForceAppPointOffset		= "wheel_1_2_center";
                center						= "wheel_1_2_center";
                boundary					= "wheel_1_2_rim";
            };
            class Wheel_3: Wheel_2
            {
                steering					= true;
                side						= "right";
                boneName					= "wheel_2_1";
                suspForceAppPointOffset		= "wheel_2_1_center";
                tireForceAppPointOffset		= "wheel_2_1_center";
                center						= "wheel_2_1_center";
                boundary					= "wheel_2_1_rim";

                width						= 0.12;
                maxCompression				= 0.2;
                maxDroop					= 0.05;
                maxBrakeTorque				= 1000;
                suspTravelDirection[]		= {0, -1.0, 0.0};

                sprungMass					= 500;
                springStrength				= 2000;
                springDamperRate			= 2000;
            };
        };

    };
    class vtx_UH60M : vtx_H60_base
    {
        scope = 2;
        editorPreview = "z\vtx\addons\UH60\Data\Preview\vtx_UH60M.jpg";
        class Turrets: Turrets
        {
            #include "turrets\copilot.hpp"
            #include "turrets\doorguns.hpp"
        };
    };
    class vtx_UH60M_Probe : vtx_UH60M
    {
        scope = 1;
        displayName = "UH-60M Blackhawk - Probe";
        class Turrets: Turrets
        {
            #include "turrets\copilot.hpp"
            #include "turrets\doorguns.hpp"
        };
        class AnimationSources: AnimationSources
        {
            class Fuelprobe_Show {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
        };
    };
    class vtx_HH60 : vtx_UH60M
    {
        scope = 2;
        editorPreview = "z\vtx\addons\UH60\Data\Preview\vtx_HH60.jpg";
        displayName = "HH-60G/M Pavehawk";

        hiddenSelectionsTextures[] = {
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "",
                "z\vtx\addons\UH60\Data\JLorion_HH60\Hull Main_co.paa",
                "z\vtx\addons\UH60\Data\JLorion_HH60\Misc_co.paa",
                "z\vtx\addons\UH60\Data\JLorion_HH60\Hull Tail_co.paa",
                "", // "markings",
                "", // "left_num_1",
                "", // "left_num_2",
                "", // "right_num_1",
                "", // "right_num_2",
                "z\vtx\addons\UH60\Data\JLorion_HH60\Fuel_probe_co.paa"
        };
        class pilotCamera: vtx_templateFLIR {};
        class Turrets: Turrets
        {
            #include "turrets\copilotFLIR.hpp"
            #include "turrets\doorguns.hpp"
            #include "turrets\cargoTurrets.hpp"
        };

        transportSoldier=0;
        cargoProxyIndexes[] = {};
        cargoAction[] = {};
        class AnimationSources: AnimationSources
        {
            class Fuelprobe_Show {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
            class FLIR_HIDE {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
            class FLIR_BACK {
                source="user";
                animPeriod=1;
                initPhase=0;
            };
            class CabinSeats_Hide {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
            class HH60Flares_Show {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
            class MAWS_Tubes_Show {
                source="user";
                animPeriod=1;
                initPhase=1;
            };
            class ERFS_Show: MAWS_Tubes_Show {
                initPhase=1;
            };
        };
    };
};

class cfgNonAIVehicles{
	class ProxyRetex;
	class Fuel_Probe: ProxyRetex{
		hiddenSelections[] ={"Fuel_Probe"};
		model = "\z\vtx\addons\UH60\Data\FuelProbe\Fuel_Probe.p3d";
	};
};