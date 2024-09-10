class CfgPatches {
    class Cheese_God_Mod {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_main", "ace_medical", "acex_field_rations"};
        version = 1.0;
        author = "EmilyTheGherkin";
        name = "Cheese_God_Mod";
    };
};

class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;

    class Babywel: ACE_ItemCore {
        scope = 2;
        displayName = "Babywel";
        descriptionShort = "A tasty treat from the cheese god.";
        picture = "\CGM\addons\Cheese_God_Mod\icons\babywel.paa";
        model = "\CGM\addons\Cheese_God_Mod\objects\babywel.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
        acex_field_rations_hungerSatiated = 20;
        acex_field_rations_thirstQuenched = 0;
        acex_field_rations_consumeTime = 5;
        acex_field_rations_consumeText = "Consuming Babywel...";
        acex_field_rations_consumeAnims[] = {"ACEX_Eat"};
        ACE_isFieldRationItem = 1;
    };
};

class ace_medical {
    class Actions {
        #include "configs\ACE_Medical_Actions.hpp"
    };
};
