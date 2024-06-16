class ACE_medical_Actions {
    class Basic {
        class ConsumeBabywel {
            displayName = "Eat Babywel Cheese";
            displayNameProgress = "Eating Babywel";
            allowedSelections[] = {"All"};
            condition = "true";
            statementStart = "";
            statementProgress = "";
            statementSuccess = "[_player] call Cheese_god_Mod_fnc_eatbabywel";
            showDisabled = 0;
            exceptions[] = {};
            icon = "\CGM\addons\Cheese_God_Mod\icons\babywel.paa";
        };
    };
};
