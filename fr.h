/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

// FR translations author: Andre Bernet <bernet.andre@gmail.com>

/*
 * Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */

#define TR_MIN_PLURAL2  2
#define TR_MAX_PLURAL2  2
// For this number of minute in the last decimal place singular form is used in
// plural
#define TR_USE_SINGULAR_IN_PLURAL 1
#define TR_USE_PLURAL2_SPECIAL_CASE 0
// If the number of minutes is above this value PLURAL2 is used
#define TR_USE_PLURAL2 INT_MAX

#define TR_MINUTE_SINGULAR             "minute"
#define TR_MINUTE_PLURAL1              "minutes"
#define TR_MINUTE_PLURAL2              "minutes"

// NON ZERO TERMINATED STRINGS
#define TR_OFFON                       "OFF","ON"
#define TR_MMMINV                      "---","INV"
#define TR_VBEEPMODE                   "Aucun","Alarme","NoKey","Tout"
#define TR_COUNTDOWNVALUES             "5s","10s","20s","30s"
#define TR_VBLMODE                     "OFF",TR("Btns","Touches"),TR("Ctrl","Contrôles"),"Tous","ON"
#define TR_TRNMODE                     "OFF",TR("+=","Ajoute"),TR(":=","Remplace")
#define TR_TRNCHN                      "CH1","CH2","CH3","CH4"
#define TR_AUX_SERIAL_MODES            "OFF","Recopie Télém.","Télémétrie In","Écolage SBUS","LUA","CLI","GPS","Debug","SpaceMouse","Module externe"
#define TR_SWTYPES                     "Rien","Inter","2-POS","3-POS"
#define TR_POTTYPES                    "Rien",TR("Pot av. ctr","Pot avec centre"),TR("Multipos","Inter multi-pos""Potentiomètre"),TR("Pot","Potentiomètre")
#define TR_SLIDERTYPES                 "Rien","Curseur"
#define TR_VPERSISTENT                 "OFF","Vol","Reset Manuel"
#define TR_COUNTRY_CODES               TR("US","USA"),TR("JP","Japon"),TR("Europe","EU")
#define TR_USBMODES                    TR("Popup","Demander"),TR("Joyst","Joystick"),TR("SDCard","Stockage"),"Série"
#define TR_JACK_MODES                  "Demander","Audio","Écolage"
#define TR_TELEMETRY_PROTOCOLS         "FrSky S.PORT","FrSky D","FrSky D (câble)","TBS Crossfire","Spektrum","AFHDS2A IBUS","Multi Télémetrie"

#define TR_SBUS_INVERSION_VALUES       "normal","non inversé"
#define TR_MULTI_TELEMETRY_MODE        "Off","On","Off+Aux","On+Aux"
#define TR_MULTI_CUSTOM                "Perso"
#define TR_VTRIMINC                    TR("Expo","Exponentiel"),TR("ExFin","Extra Fin"),"Fin","Moyen",TR("Gros","Grossier")
#define TR_VDISPLAYTRIMS               "Non","Change","Oui"
#define TR_VBEEPCOUNTDOWN              "Aucun","Bips","Voix","Vibreur",TR2_2("B & H","Bips & Haptic"),TR2_2("V & H","Voix & Haptic")
#define TR_VVARIOCENTER                "Son","Silencieux"
#define TR_CURVE_TYPES                 "Standard","Libre"

#define TR_ADCFILTERVALUES             "Globale","Off","On"

#if defined(PCBX10)
  #define TR_RETA123                   "D","F","G","A","1","3","2","4","5","6","7","L","R"
#elif defined(PCBHORUS)
  #define TR_RETA123                   "D","P","G","A","1","3","2","4","5","L","R"
#elif defined(PCBX9E)
  #define TR_RETA123                   "D","P","G","A","1","2","3","4","L","R","L","R"
#elif defined(PCBTARANIS)
  #define TR_RETA123                   "D","P","G","A","1","2","3","L","R"
#else
  #define TR_RETA123                   "D","P","G","A","1","2","3"
#endif
#define TR_VCURVETYPE                  "Diff","Expo","Fonct.","Perso."
#define TR_VCURVEFUNC                  "---","x>0","x<0","|x|","f>0","f<0","|f|"
#define TR_VMLTPX                      TR("Ajoute","Additionner"),TR("Multipl.","Multiplier"),TR("Remplace","Remplacer")
#define TR_VMLTPX2                     "+=","*=",":="

#if defined(PCBHORUS)
  #define TR_VMIXTRIMS                 "OFF","ON","Dir","Prf","Gaz","Ail","T5","T6"
#else
  #define TR_VMIXTRIMS                 "OFF","ON","Dir","Prf","Gaz","Ail"
#endif

#if LCD_W >= 212
  #define TR_CSWTIMER                  "Tempo"
  #define TR_CSWSTICKY                 "Bistb"
  #define TR_CSWRANGE                  "Plage"
  #define TR_CSWSTAY                   "Flanc"
#else
  #define TR_CSWTIMER                  "Temp"
  #define TR_CSWSTICKY                 "Bist"
  #define TR_CSWRANGE                  "Zone"
  #define TR_CSWSTAY                   "Flnc"
#endif

#define TR_CSWEQUAL                    "a=x"
#define TR_VCSWFUNC                    "---",TR_CSWEQUAL,"a" STR_CHAR_TILDE "x","a>x","a<x",TR_CSWRANGE,"|a|>x","|a|<x","ET","OU","OUX",TR_CSWSTAY,"a=b","a>b","a<b",STR_CHAR_DELTA "≥x","|" STR_CHAR_DELTA "|≥x",TR_CSWTIMER,TR_CSWSTICKY

#define TR_TEXT_SIZE                   "Standard","Minusc.","Petit","Moyen","Double"

#if defined(VARIO)
  #define TR_VVARIO                    "Vario"
#else
  #define TR_VVARIO                    "[Vario]"
#endif

#if defined(AUDIO)
  #define TR_SOUND                     "Jouer son"
#else
  #define TR_SOUND                     "Bip"
#endif

#if defined(HAPTIC)
  #define TR_HAPTIC                    "Vibreur"
#else
  #define TR_HAPTIC                    "[Vibreur]"
#endif

#if defined(VOICE)
  #define TR_PLAY_TRACK                "Jouer fichier"
  #define TR_PLAY_VALUE                "Lire valeur"
#else
  #define TR_PLAY_TRACK                "[Jouer fichier]"
  #define TR_PLAY_VALUE                "[Lire valeur]"
#endif

#define TR_SF_BG_MUSIC                 "Musique","Pause Musique"

#if defined(SDCARD)
  #define TR_SDCLOGS                   "Logs SD"
#else
  #define TR_SDCLOGS                   "[Logs SD]"
#endif

#if defined(GVARS)
  #define TR_ADJUST_GVAR               "Ajuster"
#else
  #define TR_ADJUST_GVAR               "[AjusteGV]"
#endif

#if defined(LUA)
  #define TR_SF_PLAY_SCRIPT            "Script Lua"
#else
  #define TR_SF_PLAY_SCRIPT            "[Lua]"
#endif

#if defined(DEBUG)
  #define TR_SF_TEST                   "Test"
#else
  #define TR_SF_TEST
#endif

#if defined(OVERRIDE_CHANNEL_FUNCTION) && LCD_W >= 212
  #define TR_SF_SAFETY                 "Remplace"
#elif defined(OVERRIDE_CHANNEL_FUNCTION)
  #define TR_SF_SAFETY                 "Rempl."
#else
  #define TR_SF_SAFETY                 "---"
#endif

#define TR_SF_SCREENSHOT               "Photo Écran"
#define TR_SF_RACING_MODE              "Racing Mode"
#define TR_SF_DISABLE_TOUCH            "Non Tactile"
#define TR_SF_SET_SCREEN               "Définir Écran Princ."
#define TR_SF_RESERVE                  "[réservé]"

#define TR_VFSWFUNC                    TR_SF_SAFETY,"Écolage","Trim instant.","Remise à 0","Déf.",TR_ADJUST_GVAR,"Volume","DéfFailsafe","Test Port.","Bind",TR_SOUND,TR_PLAY_TRACK,TR_PLAY_VALUE,TR_SF_RESERVE,TR_SF_PLAY_SCRIPT,TR_SF_RESERVE,TR_SF_BG_MUSIC,TR_VVARIO,TR_HAPTIC,TR_SDCLOGS,"Rétroécl.",TR_SF_SCREENSHOT,TR_SF_RACING_MODE,TR_SF_DISABLE_TOUCH,TR_SF_SET_SCREEN TR_SF_TEST

#define TR_FSW_RESET_TELEM             TR("Télem", "Télémétrie")

#if LCD_W >= 212
  #define TR_FSW_RESET_TIMERS          "Chrono 1","Chrono 2","Chrono 3"
#else
  #define TR_FSW_RESET_TIMERS          "Chr1","Chr2","Chr3"
#endif

#define TR_VFSWRESET                   TR_FSW_RESET_TIMERS, "Tout", TR_FSW_RESET_TELEM
#define TR_FUNCSOUNDS                  TR("Bp1","Beep1"),TR("Bp2","Beep2"),TR("Bp3","Beep3"),TR("Wrn1","Warn1"),TR("Wrn2","Warn2"),TR("Chee","Cheep"),TR("Rata","Ratata"),"Tick",TR("Sirn","Siren"),"Ring",TR("SciF","SciFi"),TR("Robt","Robot"),TR("Chrp","Chirp"),"Tada",TR("Crck","Crickt"),TR("Alrm","AlmClk")



#if LCD_W >= 212
#else
#endif


#define LENGTH_UNIT_IMP                "ft"
#define SPEED_UNIT_IMP                 "mph"
#define LENGTH_UNIT_METR               "m"
#define SPEED_UNIT_METR                "km/h"

#define TR_VUNITSSYSTEM                TR("Métr.","Métriques"),TR("Impér.","Impériales")
#define TR_VTELEMUNIT                  "-","V","A","mA","kts","m/s","f/s","km/h","mph","m","ft","°C","°F","%","mAh","W","mW","dB","rpm","g","°","rad","ml","fOz","mlm","Hz","ms","us","km","dBm"

#define STR_V                          (STR_VTELEMUNIT[1])
#define STR_A                          (STR_VTELEMUNIT[2])

#define TR_VTELEMSCREENTYPE            "Rien","Valeurs","Barres","Script"
#define TR_GPSFORMAT                   "DMS","NMEA"


#define TR_VSWASHTYPE                  "--- ","120","120X","140","90"

#define TR_STICKS_VSRCRAW              STR_CHAR_STICK "Dir", STR_CHAR_STICK "Prf", STR_CHAR_STICK "Gaz", STR_CHAR_STICK "Ail"

#if defined(PCBHORUS)
  #define TR_TRIMS_VSRCRAW               STR_CHAR_TRIM "Dir", STR_CHAR_TRIM "Prf", STR_CHAR_TRIM "Gaz", STR_CHAR_TRIM "Ail", STR_CHAR_TRIM "T5",  STR_CHAR_TRIM "T6"
#else
  #define TR_TRIMS_VSRCRAW               STR_CHAR_TRIM "Dir", STR_CHAR_TRIM "Prf", STR_CHAR_TRIM "Gaz", STR_CHAR_TRIM "Ail"
#endif

#if defined(PCBHORUS)
  #define TR_TRIMS_SWITCHES              STR_CHAR_TRIM "Dg", STR_CHAR_TRIM "Dd", STR_CHAR_TRIM "Pb", STR_CHAR_TRIM "Ph", STR_CHAR_TRIM "Gb", STR_CHAR_TRIM "Gh", STR_CHAR_TRIM "Ag", STR_CHAR_TRIM "Ad", STR_CHAR_TRIM "5d", STR_CHAR_TRIM "5u", STR_CHAR_TRIM "6d", STR_CHAR_TRIM "6u"
#else
#define TR_TRIMS_SWITCHES            TR("tDg",STR_CHAR_TRIM "Dg"),TR("tDd",STR_CHAR_TRIM "Dd"),TR("tPb",STR_CHAR_TRIM "Pb"),TR("tPh",STR_CHAR_TRIM "Ph"),TR("tGb",STR_CHAR_TRIM "Gb"),TR("tGh",STR_CHAR_TRIM "Gh"),TR("tAg",STR_CHAR_TRIM "Ag") TR("tAd",STR_CHAR_TRIM "Ad")
#endif

#if defined(PCBHORUS) || defined(PCBNV14)
  #define TR_VKEYS                     "PGUP","PGDN","ENTER","MDL","RTN","TELE","SYS"
#elif defined(PCBXLITE)
  #define TR_VKEYS                     "Maj.","Sortie","Entrer","Bas","Haut","Droite","Gauche"
#elif defined(RADIO_FAMILY_JUMPER_T12)
  #define TR_VKEYS                     "Sortie","Entrer","Bas","Haut","Droite","Gauche"
#elif defined(RADIO_TX12) || defined(RADIO_TX12MK2)
  #define TR_VKEYS                     "Exit","Enter","PGUP","PGDN","SYS","MDL","TELE"
#elif defined(RADIO_T8) || defined(RADIO_COMMANDO8)
  #define TR_VKEYS                     "RTN","ENTER","PGUP","PGDN","SYS","MDL","UP","DOWN"
#elif defined(RADIO_ZORRO)
  #define TR_VKEYS                     "RTN","ENTER","PGUP","PGDN","SYS","MDL","TELE"
#elif defined(PCBTARANIS)
  #define TR_VKEYS                     "Menu","Quitter","Entrer","Page","Plus","Moins"
#else
  #define TR_VKEYS                     "Menu","Quitter","Bas","Haut","Droite","Gauche"
#endif

#if defined(PCBNV14)
#define  TR_RFPOWER_AFHDS2             "Défaut","Haut"
#endif

#define TR_ROTARY_ENCODERS
#define TR_ROTENC_SWITCHES

#define TR_ON_ONE_SWITCHES             "ON","Un"

#if defined(COLORLCD)
  #define TR_ROTARY_ENC_OPT         "Normal","Inversé"
#else
  #define TR_ROTARY_ENC_OPT         "Normal","Inversé","V-I H-N","V-I H-A"
#endif

#if defined(IMU)
  #define TR_IMU_VSRCRAW               "TltX","TltY",
#else
  #define TR_IMU_VSRCRAW
#endif

#if defined(HELI)
  #define TR_CYC_VSRCRAW               "CYC1","CYC2","CYC3"
#else
  #define TR_CYC_VSRCRAW               "[C1]","[C2]","[C3]"
#endif

#define TR_RESERVE_VSRCRAW             "[--]"
#define TR_EXTRA_VSRCRAW               "Batt","H:M","GPS",TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,"Chr1","Chr2","Chr3"

#define TR_VTMRMODES                   "OFF","ON","GZs","GZ%","GZt"
#define TR_VTRAINER_MASTER_OFF         "OFF"
#define TR_VTRAINER_MASTER_JACK        "Maître/Jack"
#define TR_VTRAINER_SLAVE_JACK         "Élève/Jack"
#define TR_VTRAINER_MASTER_SBUS_MODULE "Maître/SBUS Module"
#define TR_VTRAINER_MASTER_CPPM_MODULE "Maître/CPPM Module"
#define TR_VTRAINER_MASTER_BATTERY     "Maître/Série"
#define TR_VTRAINER_BLUETOOTH          TR("Maître/BT","Maître/Bluetooth"),TR("Élève/BT","Élève/Bluetooth")
#define TR_VTRAINER_MULTI              "Master/Multi"
#define TR_VFAILSAFE                   "Pas déf.","Maintien",TR("Prédéf.","Prédéfini"),"Pas d'imp","Récepteur"
#define TR_VSENSORTYPES                "Perso","Calculé"
#define TR_VFORMULAS                   "Addition","Moyenne","Min","Max","Multipl.","Totalise","Élément","Consomm.","Distance"
#define TR_VPREC                       "0.--","0.0","0.00"
#define TR_VCELLINDEX                  "Mini.","1","2","3","4","5","6","7","8","Maxi.","Diff."
#define TR_SUBTRIMMODES                STR_CHAR_DELTA " (centre seulement)","= (symétrique)"
#define TR_TIMER_DIR                   TR("Rester", "Voir Rester"), TR("Écoulé", "Voir Écoulé")

// ZERO TERMINATED STRINGS

#if defined(COLORLCD)
#if defined(BOLD)
#define TR_FONT_SIZES                  "STD"
#else
#define TR_FONT_SIZES                  "STD","GRAS","XXS","XS","L","XL","XXL"
#endif
#endif

#if defined(PCBFRSKY)
  #define TR_ENTER                     "[ENTER]"
#elif defined(PCBNV14)
  #define TR_ENTER                     "[SUIVANT]"
#else
  #define TR_ENTER                     "[MENU]"
#endif

#if defined(PCBHORUS)
  #define TR_EXIT                      "RTN"
  #define TR_OK                        TR_ENTER
#else
  #define TR_EXIT                      "EXIT"
  #define TR_OK                        "\010" "\010" "\010" TR("[OK]", "\010" "\010" "[OK]")
#endif

#if defined(PCBTARANIS)
  #define TR_POPUPS_ENTER_EXIT         TR(TR_EXIT "\010" TR_ENTER, TR_EXIT "\010" "\010" "\010" "\010" TR_ENTER)
#else
  #define TR_POPUPS_ENTER_EXIT         TR_ENTER "\010" TR_EXIT
#endif

#define TR_MENUWHENDONE                CENTER "\006" TR_ENTER " QUAND PRÊT"
#define TR_FREE                        "disp."
#define TR_YES                         "Oui"
#define TR_NO                          "Non"
#define TR_DELETEMODEL                 "SUPPRIMER MODÈLE"
#define TR_COPYINGMODEL                "Copie..."
#define TR_MOVINGMODEL                 "Déplacement..."
#define TR_LOADINGMODEL                "Chargement..."
#define TR_UNLABELEDMODEL              "Non catégorisé"
#define TR_NAME                        "Nom"
#define TR_MODELNAME                   TR("Nom modèle", "Nom du modèle")
#define TR_PHASENAME                   "Nom phase"
#define TR_MIXNAME                     TR("Nom ligne", "Nom du mixeur")
#define TR_INPUTNAME                   TR("Entrée", "Nom entrée")
#define TR_EXPONAME                    TR("Nom", "Nom ligne")
#define TR_BITMAP                      "Image du modèle"
#define TR_NO_PICTURE                  "Pas d'image"
#define TR_TIMER                       "Chrono "
#define TR_START                       "Start"
#define TR_ELIMITS                     TR("Limites ét.", "Limites étendues")
#define TR_ETRIMS                      TR("Trims ét.", "Trims étendus")
#define TR_TRIMINC                     TR("Pas Trim", "Pas de trims")
#define TR_DISPLAY_TRIMS               TR("Aff. trims", "Affichage trims")
#define TR_TTRACE                      TR("Source gaz", INDENT "Source")
#define TR_TTRIM                       TR("Trim gaz", INDENT "Trim ralenti uniq.")
#define TR_TTRIM_SW                    TR("T-Trim-Sw", INDENT "Trim switch")
#define TR_BEEPCTR                     TR("Bips centr", "Bips centrage")
#define TR_USE_GLOBAL_FUNCS            TR("Fonc. glob.", "Fonctions globales")
#define TR_PROTOCOL                    TR("Proto.", "Protocole")
#define TR_PPMFRAME                    INDENT "Trame PPM"
#define TR_REFRESHRATE                 INDENT "Période"
#define STR_WARN_BATTVOLTAGE           TR(INDENT "Signal is VBAT: ", INDENT "ATTENTION: signal est à VBAT: ")
#define TR_WARN_5VOLTS                 "Attention: niveau de sortie 5 volts"
#define TR_MS                          "ms"
#define TR_SWITCH                      TR("Inter", "Interrupteur")
#define TR_SF_SWITCH                   "Interrupteur"
#define TR_TRIMS                       "Trims"
#define TR_FADEIN                      "Fondu ON"
#define TR_FADEOUT                     "Fondu OFF"
#define TR_DEFAULT                     "(défaut)"
#if defined(COLORLCD)
  #define TR_CHECKTRIMS                "Vérif. Trims"
#else
  #define TR_CHECKTRIMS                "\006Vérif\012Trims"
#endif
#define OFS_CHECKTRIMS                 (9*FW)
#define TR_SWASHTYPE                   TR("Type de Plat.", "Type de plateau")
#define TR_COLLECTIVE                  TR("Collectif", "Source collectif")
#define TR_AILERON                     "Source cyc. lat."
#define TR_ELEVATOR                    "Source cyc. lon."
#define TR_SWASHRING                   TR("Limite Cycl.", "Limite du cyclique")
#define TR_MODE                        "Mode"
#if LCD_W > LCD_H
  #define TR_LEFT_STICK                "Gauche"
#else
  #define TR_LEFT_STICK                "Gauche"
#endif
#define TR_SUBTYPE                     INDENT "Sous-type"
#define TR_NOFREEEXPO                  "Max expos atteint!"
#define TR_NOFREEMIXER                 "Max mixages atteint!"
#define TR_SOURCE                      "Source"
#define TR_WEIGHT                      "Ratio"
#define TR_SIDE                        "Coté"
#define TR_OFFSET                      "Décalage"
#define TR_TRIM                        "Trim"
#define TR_DREX                        "DRex"
#define DREX_CHBOX_OFFSET              30
#define TR_CURVE                       "Courbe"
#define TR_FLMODE                      TR("Phase", "Phases")
#define TR_MIXWARNING                  "Alerte"
#define TR_OFF                         "OFF"
#define TR_ANTENNA                     "Antenne"
#define TR_NO_INFORMATION              TR("Pas d'info", "Pas d'information")
#define TR_MULTPX                      "Opération"
#define TR_DELAYDOWN                   "Retard bas"
#define TR_DELAYUP                     "Retard haut"
#define TR_SLOWDOWN                    "Ralenti bas"
#define TR_SLOWUP                      "Ralenti haut"
#define TR_MIXES                       "MIXEUR"
#define TR_CV                          "CB"
#if defined(PCBNV14)
#define TR_GV                          "VG"
#else
#define TR_GV                          TR("G", "VG")
#endif
#define TR_RANGE                       INDENT "Plage"
#define TR_CENTER                      INDENT "Centre"
#define TR_ALARM                       "Alarme"
#define TR_BLADES                      "Pales/Poles"
#define TR_SCREEN                      "Écran "
#define TR_SOUND_LABEL                 "Son"
#define TR_LENGTH                      "Durée"
#define TR_BEEP_LENGTH                 "Durée bips"
#define TR_BEEP_PITCH                   "Tonalité"
#define TR_HAPTIC_LABEL                "Vibreur"
#define TR_STRENGTH                    "Force"
#define TR_IMU_LABEL                   "IMU"
#define TR_IMU_OFFSET                  "Décalage"
#define TR_IMU_MAX                     "Max"
#define TR_CONTRAST                    "Contraste"
#define TR_ALARMS_LABEL                "Alarmes"
#define TR_BATTERY_RANGE               "Plage batterie"
#define TR_BATTERYCHARGING             "En charge..."
#define TR_BATTERYFULL                 "Batterie chargée"
#define TR_BATTERYNONE                 "Pas de batterie!"
#define TR_BATTERYWARNING              TR("Batterie", "Batterie faible")
#define TR_INACTIVITYALARM             "Inactivité"
#define TR_MEMORYWARNING               "Mémoire pleine"
#define TR_ALARMWARNING                TR("Silence", "Sons désactivés")
#define TR_RSSI_SHUTDOWN_ALARM           TR("RSSI extinct.", "Vérif RSSI à l'extinction")
#define TR_FLYSKY_TELEMETRY            TR("FlySky RSSI #", "Utiliser la valeur RSSI FlySky sans étalonner")
#define TR_MODEL_STILL_POWERED         TR("Modèle allumé", "Modèle encore allumé")
#define TR_USB_STILL_CONNECTED         "USB encore connecté"
#define TR_MODEL_SHUTDOWN              "Éteindre ?"
#define TR_PRESS_ENTER_TO_CONFIRM      "Appui [Enter] pour confirmer"
#define TR_THROTTLE_LABEL              "Gaz"
#define TR_THROTTLE_START              "Gaz Start"
#define TR_THROTTLEREVERSE             TR("Inv. gaz", INDENT "Inversion gaz")
#define TR_MINUTEBEEP                  TR("Bip min.", "Annonces minutes")
#define TR_BEEPCOUNTDOWN               TR(INDENT "Bip fin", INDENT "Compte à rebours")
#define TR_PERSISTENT                  TR(INDENT "Persist.", INDENT "Persistant")
#define TR_BACKLIGHT_LABEL             "Rétroéclairage"
#define TR_GHOST_MENU_LABEL            "GHOST MENU"
#define TR_STATUS                      "Statut"
#define TR_BLDELAY                     INDENT "Durée"
#define TR_BLONBRIGHTNESS              INDENT "Luminosité ON"
#define TR_BLOFFBRIGHTNESS             INDENT "Luminosité OFF"
#define TR_KEYS_BACKLIGHT              "Rétroéclairage touches"
#define TR_BLCOLOR                     "Couleur"
#define TR_SPLASHSCREEN                "Logo d'accueil"
#define TR_PWR_ON_DELAY                "Délai btn ON"
#define TR_PWR_OFF_DELAY               "Délai btn OFF"
#define TR_THROTTLE_WARNING             TR(INDENT "Alerte gaz", INDENT "Alerte gaz")
#define TR_CUSTOM_THROTTLE_WARNING     TR(INDENT INDENT INDENT INDENT "Pos. Perso", INDENT INDENT INDENT INDENT "Position perso ?")
#define TR_CUSTOM_THROTTLE_WARNING_VAL TR("Pos. %", "Position %")
#define TR_SWITCHWARNING               TR(INDENT "Alerte int", INDENT "Pos. Interrupteurs")
#define TR_POTWARNINGSTATE             TR(INDENT "Pot&Slid.", INDENT "Pot & Curseur")
#define TR_SLIDERWARNING               TR(INDENT "Slid. pos.", INDENT "Position Curseurs")
#define TR_POTWARNING                  TR(INDENT "Alerte pot", INDENT "Pos. Potentios")
#define TR_TIMEZONE                    "Fuseau horaire"
#define TR_ADJUST_RTC                  TR("Ajust. RTC", "Ajust. heure auto")
#define TR_GPS                         "GPS"
#define TR_DEF_CHAN_ORD                TR("Ordre can. prédéf.", "Ordre canaux prédéfinis")
#define TR_STICKS                      "Manches"
#define TR_POTS                        "Potentiomètres"
#define TR_SWITCHES                    "Inters"
#define TR_SWITCHES_DELAY              "Délai inter son"
#define TR_SLAVE                       "Élève"
#define TR_MODESRC                     "Mode\006% Source"
#define TR_MULTIPLIER                  "Multiplieur"
#define TR_CAL                         "Cal"
#define TR_CALIBRATION                 "Calibration"
#define TR_VTRIM                       "Trim - +"
#define TR_CALIB_DONE                  "Calibration terminée"
#if defined(PCBHORUS)
  #define TR_MENUTOSTART               "Presser [Enter] pour commencer"
  #define TR_SETMIDPOINT               "Centrer manches/pots/curseurs puis [Enter]"
  #define TR_MOVESTICKSPOTS            "Bouger manches/pots/curseurs puis [Enter]"
#elif defined(COLORLCD)
  #define TR_MENUTOSTART               TR_ENTER " POUR DÉBUT"
  #define TR_SETMIDPOINT               "RÉGLER NEUTRES"
  #define TR_MOVESTICKSPOTS            "BOUGER STICKS/POTS"
#else
  #define TR_MENUTOSTART               CENTER"\006" TR_ENTER " POUR DÉBUT"
  #define TR_SETMIDPOINT               CENTER"\010REGLER NEUTRES"
  #define TR_MOVESTICKSPOTS            CENTER"\004BOUGER STICKS/POTS"
#endif
#define TR_TXnRX                       "Tx:\0Rx:"
#define OFS_RX                         4
#define TR_NODATA                      CENTER "NO DATA"
#define TR_US                          "us"
#define TR_HZ                          "Hz"

#define TR_TMIXMAXMS                   "Tmix max"
#define TR_FREE_STACK                  "Free stack"
#define TR_INT_GPS_LABEL               "GPS interne"
#define TR_HEARTBEAT_LABEL             "Heartbeat"
#define TR_LUA_SCRIPTS_LABEL           "Lua scripts"
#define TR_FREE_MEM_LABEL              "Mémoire libre"
#define TR_DURATION_MS             TR("[D]","Durée(ms): ")
#define TR_INTERVAL_MS             TR("[I]","Intervalle(ms): ")
#define TR_MEM_USED_SCRIPT         "Script(B): "
#define TR_MEM_USED_WIDGET         "Widget(B): "
#define TR_MEM_USED_EXTRA          "Extra(B): "
#define TR_STACK_MIX                   "Mix: "
#define TR_STACK_AUDIO                 "Audio: "
#define TR_GPS_FIX_YES                 "Fixe: Oui"
#define TR_GPS_FIX_NO                  "Fixe: Non"
#define TR_GPS_SATS                    "Sats: "
#define TR_GPS_HDOP                    "Hdop: "
#define TR_STACK_MENU                  "Menu: "
#define TR_TIMER_LABEL                 "Chrono"
#define TR_THROTTLE_PERCENT_LABEL      "Throttle %"
#define TR_BATT_LABEL                  "Batterie"
#define TR_SESSION                     "Session"

#define TR_MENUTORESET                 TR_ENTER" pour RAZ"
#define TR_PPM_TRAINER                 "TR"
#define TR_CH                          "CH"
#define TR_MODEL                       "MODÈLE"
#define TR_FM                          "PV"
#define TR_EEPROMLOWMEM                "EEPROM pleine!"
#define TR_PRESS_ANY_KEY_TO_SKIP       "Touche pour ignorer"
#define TR_THROTTLE_NOT_IDLE           "Gaz pas à zéro"
#define TR_ALARMSDISABLED              "Alarmes Désactivées"
#define TR_PRESSANYKEY                 TR("Touche pour continuer", "Touche pour continuer")
#define TR_BADEEPROMDATA               "EEPROM corrompue"
#define TR_BAD_RADIO_DATA              "Réglages radio corrompus"
#define TR_RADIO_DATA_RECOVERED        TR3("Utilisation des données radio sauvegardées","Utilisation des paramètres radio sauvegardées","Réglages Radio restaurés de la Sauvegarde")
#define TR_RADIO_DATA_UNRECOVERABLE    TR3("Réglages Radio invalides","Réglages Radio invalides", "Impossible lire réglages radio valides")
#define TR_EEPROMFORMATTING            "Formatage EEPROM"
#define TR_STORAGE_FORMAT              "Préparation stockage"
#define TR_EEPROMOVERFLOW              "Dépassement EEPROM"
#define TR_RADIO_SETUP                 "CONFIG RADIO"
#define TR_MENUTRAINER                 "ÉCOLAGE"
#define TR_MENUSPECIALFUNCS            "FONCTIONS GLOBALES"
#define TR_MENUVERSION                 "VERSION"
#define TR_MENU_RADIO_SWITCHES         TR("INTERS", "TEST INTERRUPTEURS")
#define TR_MENU_RADIO_ANALOGS          TR("ANAS", "ENTRÉES ANALOGIQUES")
#define TR_MENU_RADIO_ANALOGS_CALIB    "CALIBRATED ANALOGS"
#define TR_MENU_RADIO_ANALOGS_RAWLOWFPS "RAW ANALOGS (5 Hz)"
#define TR_MENUCALIBRATION             "CALIBRATION"
#if defined(COLORLCD)
  #define TR_TRIMS2OFFSETS             "Trims => Subtrims"
#else
  #define TR_TRIMS2OFFSETS             "\006Trims => Subtrims"
#endif
#define TR_CHANNELS2FAILSAFE          "Channels=>Failsafe"
#define TR_CHANNEL2FAILSAFE            "Channel=>Failsafe"
#define TR_MENUMODELSEL                "MODÈLES"
#define TR_MENU_MODEL_SETUP                   TR("CONF. MODÈLE", "CONFIGURATION")
#define TR_MENUFLIGHTMODE              "PHASE DE VOL"
#define TR_MENUFLIGHTMODES             "PHASES DE VOL"
#define TR_MENUHELISETUP               TR("CONF.HELI", "CONFIGURATION HÉLICO")

  #define TR_MENUINPUTS                "ENTRÉES"
  #define TR_MENULIMITS                "SORTIES"

#define TR_MENUCURVES                  "COURBES"
#define TR_MENUCURVE                   "COURBE"
#define TR_MENULOGICALSWITCH           "INTER LOG."
#define TR_MENULOGICALSWITCHES         TR("INTERS LOG.", "INTERS LOGIQUES")
#define TR_MENUCUSTOMFUNC              TR("FONCTIONS SPEC.", "FONCTIONS SPÉCIALES")
#define TR_MENUCUSTOMSCRIPTS           "SCRIPTS PERSOS"
#define TR_MENUTELEMETRY               "TELEMETRIE"
#define TR_MENUSTAT                    TR("STATS", "STATISTIQUES")
#define TR_MENUDEBUG                   "DEBUG"
#define TR_MONITOR_CHANNELS1           "VOIES 1-8"
#define TR_MONITOR_CHANNELS2           "VOIES 9-16"
#define TR_MONITOR_CHANNELS3           "VOIES 17-24"
#define TR_MONITOR_CHANNELS4           "VOIES 25-32"
#define TR_MONITOR_SWITCHES            "INTERS LOGIQUES"
#define TR_MONITOR_OUTPUT_DESC         "Sorties"
#define TR_MONITOR_MIXER_DESC          "Mixeurs"
#define TR_RECEIVER_NUM                TR("NumRx", "No. récepteur")
#define TR_RECEIVER                    "Récept."
#define TR_MULTI_RFTUNE                TR(INDENT "Ajust.fréq", INDENT "Ajustement fréq.")
#define TR_MULTI_RFPOWER               "Puissance RF"
#define TR_MULTI_WBUS                  "Sortie"
#define TR_MULTI_TELEMETRY             "Télémétrie"
#define TR_MULTI_VIDFREQ               TR(INDENT "Fréq. vidéo", INDENT "Fréquence vidéo")
#define TR_RF_POWER                     TR("Puiss. RF", "Puissance RF")
#define TR_MULTI_FIXEDID               "ID fixe"
#define TR_MULTI_OPTION                TR(INDENT "Option", INDENT "Option perso")
#define TR_MULTI_AUTOBIND              TR(INDENT "Bind voie", INDENT "Bind sur voie")
#define TR_DISABLE_CH_MAP              TR("No Ch. map", "Désact. réorg. voies")
#define TR_DISABLE_TELEM               TR("No Telem", "Désact. Télémétrie")
#define TR_MULTI_DSM_AUTODTECT         TR(INDENT "Autodét.", INDENT "Autodétection")
#define TR_MULTI_LOWPOWER              TR(INDENT "Basse puis.", INDENT "Mode basse puiss.")
#define TR_MULTI_LNA_DISABLE            INDENT "LNA désactivé"
#define TR_MODULE_TELEMETRY            TR(INDENT "S.Port", INDENT "Lien S.Port")
#define TR_MODULE_TELEM_ON             TR("ON", "Actif")
#define TR_DISABLE_INTERNAL            TR("Désact intRF", "Désact. RF interne")
#define TR_MODULE_NO_SERIAL_MODE       TR("Mode série?", "Pas en mode série")
#define TR_MODULE_NO_INPUT             TR("Pas de sign.", "Aucun signal série")
#define TR_MODULE_NO_TELEMETRY         TR3("Pas de télém.", "Télémétrie absente", "Télémétrie absente(act. MULTI_TELEMETRY)")
#define TR_MODULE_WAITFORBIND          "Binder d'abord"
#define TR_MODULE_BINDING              "Bind..."
#define TR_MODULE_UPGRADE_ALERT              "Mise à jour requise"
#define TR_MODULE_UPGRADE              TR("Upg. advised", "MàJ Disponible")
#define TR_REBIND                      "Rebind requis"
#define TR_REG_OK                      "Enregistr. ok"
#define TR_BIND_OK                     "Bind ok"
#define TR_BINDING_CH1_8_TELEM_ON      "Ch1-8 Télem ON"
#define TR_BINDING_CH1_8_TELEM_OFF     "Ch1-8 Télem OFF"
#define TR_BINDING_CH9_16_TELEM_ON     "Ch9-16 Télem ON"
#define TR_BINDING_CH9_16_TELEM_OFF    "Ch9-16 Télem OFF"
#define TR_PROTOCOL_INVALID            TR("Sél. invalide", "Protocole invalide")
#define TR_MODULE_STATUS               TR(INDENT "Etat", INDENT "État module")
#define TR_MODULE_SYNC                 TR(INDENT "Sync", INDENT "Proto Sync Status")
#define TR_MULTI_SERVOFREQ             TR(INDENT "Fréq.servo", INDENT "Fréquence servos")
#define TR_MULTI_MAX_THROW             TR("Max. Throw", "Enable max. throw")
#define TR_MULTI_RFCHAN                TR("RF Channel", "Sélection canal RF")
#define TR_GPS_COORDS_FORMAT                    TR("Coordonnées", "Coordonnées GPS")
#define TR_VARIO                       TR("Vario", "Variomètre")
#define TR_PITCH_AT_ZERO               "Tonalité zéro"
#define TR_PITCH_AT_MAX                "Tonalité max"
#define TR_REPEAT_AT_ZERO              TR("Interv. zéro", "Intervalle au zéro")
#define TR_BATT_CALIB                  "Calib. batt"
#define TR_CURRENT_CALIB               "Calib. cour"
#define TR_VOLTAGE                     TR(INDENT "Tension",INDENT "Source tension")
#define TR_SELECT_MODEL                "Sélect. modèle"
#define TR_MANAGE_MODELS               "GESTION MODÈLES"
#define TR_MODELS                      "Modèles"
#define TR_SELECT_MODE                 "Sélection mode"
#define TR_CREATE_MODEL                "Créer modèle"
#define TR_FAVORITE_LABEL              "Favoris"
#define TR_MODELS_MOVED                "Modèles non utilisés déplacés vers"
#define TR_NEW_MODEL                   "Nouveau Modèle"
#define TR_INVALID_MODEL               "Modèle Invalide "
#define TR_EDIT_LABELS                 "Éditer catégorie"
#define TR_LABEL_MODEL                 "Catégorie Modèle"
#define TR_MOVE_UP                     "Déplacer vers le haut"
#define TR_MOVE_DOWN                   "Déplacer vers le bas"
#define TR_ENTER_LABEL                 "Entrer Catégorie"
#define TR_LABEL                       "Catégorie"
#define TR_LABELS                      "Catégories"
#define TR_CURRENT_MODEL               "Courant"
#define TR_ACTIVE                      "Actif"
#define TR_NEW                         "Nouveau"
#define TR_NEW_LABEL                   "Nouvelle catégorie"
#define TR_RENAME_LABEL                "Renommer catégorie"
#define TR_DELETE_LABEL                "Effacer catégorie"
#define TR_DUPLICATE_MODEL             "Dupliquer modèle"
#define TR_COPY_MODEL                  "Copier modèle"
#define TR_MOVE_MODEL                  "Déplacer modèle"
#define TR_BACKUP_MODEL                "Archiver modèle"
#define TR_DELETE_MODEL                "Supprimer modèle"
#define TR_RESTORE_MODEL               "Restaurer modèle"
#define TR_DELETE_ERROR                "Effacement impossible"
#define TR_SDCARD_ERROR                "Erreur carte SD"
#define TR_SDCARD                      "SD Card"
#define TR_NO_FILES_ON_SD              "Pas de fichiers sur SD!"
#define TR_NO_SDCARD                   "Carte SD indisponible"
#define TR_WAITING_FOR_RX              "Attente du RX..."
#define TR_WAITING_FOR_TX              "Attente du TX..."
#define TR_WAITING_FOR_MODULE          TR("Waiting module", "Attente du module...")
#define TR_NO_TOOLS                    "Pas d'outils dispo."
#define TR_NORMAL                      "Normal"
#define TR_NOT_INVERTED                "Non inv."
#define TR_NOT_CONNECTED               "!Connecté"
#define TR_CONNECTED                   "Connecté"
#define TR_FLEX_915                    "Flex 915MHz"
#define TR_FLEX_868                    "Flex 868MHz"
#define TR_16CH_WITHOUT_TELEMETRY      TR("16CH sans télém.", "16CH sans télémétrie")
#define TR_16CH_WITH_TELEMETRY         TR("16CH avec télém.", "16CH avec télémétrie")
#define TR_8CH_WITH_TELEMETRY          TR("8CH avec télém.", "8CH avec télémétrie")
#define TR_EXT_ANTENNA                 "Antenne Ext."
#define TR_PIN                         "Pin"
#define TR_UPDATE_RX_OPTIONS           "Sauver options RX?"
#define TR_UPDATE_TX_OPTIONS           "Sauver options TX?"
#define TR_MODULES_RX_VERSION          "Versions modules / RX"
#define TR_SHOW_MIXER_MONITORS         "Show mixer monitors"
#define TR_MENU_MODULES_RX_VERSION     "VERSIONS MODULES / RX "
#define TR_MENU_FIRM_OPTIONS           "OPTIONS FIRMWARE"
#define TR_IMU                        "IMU"
#define TR_STICKS_POTS_SLIDERS         "Manches/Pots/Inters"
#define TR_PWM_STICKS_POTS_SLIDERS     "Manches PWM/Pots/Inters"
#define TR_RF_PROTOCOL                 "Protocole RF"
#define TR_MODULE_OPTIONS              "Options module"
#define TR_POWER                       "Puissance"
#define TR_NO_TX_OPTIONS               "Pas d'options TX"
#define TR_RTC_BATT                    "Pile RTC"
#define TR_POWER_METER_EXT             "Puissancemètre (EXT)"
#define TR_POWER_METER_INT             "Puissancemètre (INT)"
#define TR_SPECTRUM_ANALYSER_EXT       TR("Spectre (EXT)", "Analyseur spectre (EXT)")
#define TR_SPECTRUM_ANALYSER_INT       TR("Spectre (INT)", "Analyseur spectre (INT)")
#define TR_SDCARD_FULL                 "Carte SD pleine"
#define TR_NEEDS_FILE                  "FICHIER EXIGE"
#define TR_EXT_MULTI_SPEC              "opentx-inv"
#define TR_INT_MULTI_SPEC              "stm-opentx-noinv"
#define TR_INCOMPATIBLE                "Incompatible"
#define TR_WARNING                     "ALERTE"
#define TR_EEPROMWARN                  "EEPROM"
#define TR_STORAGE_WARNING             "STOCKAGE"
#define TR_EEPROM_CONVERTING           "Conversion EEPROM"
#define TR_SDCARD_CONVERSION_REQUIRE   "Conversion carte SD exigée"
#define TR_CONVERTING                  "Convertit: "
#define TR_THROTTLE_UPPERCASE                "GAZ"
#define TR_ALARMSWARN                  "SON"
#define TR_SWITCHWARN                  TR("INTERS","CONTRÔLES")
#define TR_FAILSAFEWARN                "FAILSAFE"
#define TR_TEST_WARNING                 TR("TESTING", "TEST BUILD")
#define TR_TEST_NOTSAFE                 "Version de test uniq."
#define TR_WRONG_SDCARDVERSION         "Version requise: "
#define TR_WARN_RTC_BATTERY_LOW        "Batterie RTC faible"
#define TR_WARN_MULTI_LOWPOWER         "Mode basse puiss."
#define TR_BATTERY                     "BATTERIE"
#define TR_WRONG_PCBREV                "PCB incorrect détecté"
#define TR_EMERGENCY_MODE              "MODE SECOURS"
#define TR_NO_FAILSAFE                 TR3("Failsafe pas déf.", "Failsafe pas déf.", "Failsafe pas défini")
#define TR_KEYSTUCK                    "Touche bloquée"
#define TR_VOLUME                      "Volume"
#define TR_LCD                         "Afficheur"
#define TR_BRIGHTNESS                  "Luminosité"
#define TR_CPU_TEMP                    "Temp. CPU\016>"
#define TR_CPU_CURRENT                 "Courant\022>"
#define TR_CPU_MAH                     "Consomm."
#define TR_COPROC                      "CoProc."
#define TR_COPROC_TEMP                 "Temp. MB \016>"
#define TR_CAPAWARNING                 INDENT "Capacité Basse"
#define TR_TEMPWARNING                 INDENT "Surchauffe"
#define TR_TTL_WARNING                 "Attention: utiliser valeur logique  3.3V"
#define TR_FUNC                        "Fonction"
#define TR_V1                          "V1"
#define TR_V2                          "V2"
#define TR_DURATION                    "Durée"
#define TR_DELAY                       "Délai"
#define TR_SD_CARD                     "Carte SD"
#define TR_SDHC_CARD                   "Carte SD-HC"
#define TR_NO_SOUNDS_ON_SD             "Aucun son sur SD"
#define TR_NO_MODELS_ON_SD             "Aucun modèle SD"
#define TR_NO_BITMAPS_ON_SD            "Aucun Bitmap SD"
#define TR_NO_SCRIPTS_ON_SD            "Aucun Script SD"
#define TR_SCRIPT_SYNTAX_ERROR          TR("Erreur syntaxe", "Erreur syntaxe script")
#define TR_SCRIPT_PANIC                "Script bloqué"
#define TR_SCRIPT_KILLED               "Script interrompu"
#define TR_SCRIPT_ERROR                "Erreur inconnue"
#define TR_PLAY_FILE                   "Lire"
#define TR_DELETE_FILE                 "Supprimer"
#define TR_COPY_FILE                   "Copier"
#define TR_RENAME_FILE                 "Renommer"
#define TR_ASSIGN_BITMAP               "Sélectionner image"
#define TR_ASSIGN_SPLASH               "Logo d'accueil"
#define TR_EXECUTE_FILE                "Exécuter"
#define TR_REMOVED                     " supprimé"
#define TR_SD_INFO                     "Information"
#define TR_SD_FORMAT                   "Formater"
#define TR_NA                          "N/D"
#define TR_HARDWARE                    "MATÉRIEL"
#define TR_FORMATTING                  "Formatage..."
#define TR_TEMP_CALIB                  "Calib. temp"
#define TR_TIME                        "Heure"
#define TR_MAXBAUDRATE                 "Max bauds"
#define TR_BAUDRATE                    "Baudrate"
#define TR_SAMPLE_MODE                 "Mode échantillon"
#define TR_SAMPLE_MODES                "Normal","OneBit"
#define TR_LOADING                     "Loading..."
#define TR_DELETE_THEME                "Supprimer Thème?"
#define TR_SAVE_THEME                  "Sauvegarder Thème?"
#define TR_EDIT_COLOR                  "Éditer Couleur"
#define TR_NO_THEME_IMAGE              "Pas d'image de thème"
#define TR_BACKLIGHT_TIMER             "Délai d'inactivité"

#if defined(COLORLCD)
  #define TR_MODEL_QUICK_SELECT        "Sélection rapide modèle"
#endif

#define TR_SELECT_TEMPLATE_FOLDER      "Sélectionnez un dossier de modèles"
#define TR_SELECT_TEMPLATE             "SÉLECTIONNEZ UN EXEMPLE DE MODÈLE:"
#define TR_NO_TEMPLATES                "Aucun exemple de modèle n'a été trouvé dans ce dossier"
#define TR_SAVE_TEMPLATE               "Sauvegarder comme exemple"
#define TR_BLANK_MODEL                 "Modèle vide"
#define TR_BLANK_MODEL_INFO            "Création de modèle vide"
#define TR_FILE_EXISTS                 "FICHIER EXISTANT"
#define TR_ASK_OVERWRITE               "Voulez-vous écraser?"

#define TR_BLUETOOTH                   "Bluetooth"
#define TR_BLUETOOTH_DISC              "Découvrir"
#define TR_BLUETOOTH_INIT              "Init"
#define TR_BLUETOOTH_DIST_ADDR         "Addr dist."
#define TR_BLUETOOTH_LOCAL_ADDR        "Addr locale"
#define TR_BLUETOOTH_PIN_CODE          "Code PIN"
#define TR_BLUETOOTH_NODEVICES         "Aucun périphérique trouvé"
#define TR_BLUETOOTH_SCANNING          "Scanning..."
#define TR_BLUETOOTH_BAUDRATE          "Baudrate BT"
#if defined(PCBX9E)
#define TR_BLUETOOTH_MODES             "---","Activé"
#else
#define TR_BLUETOOTH_MODES             "---","Télémétrie","Écolage"
#endif
#define TR_SD_INFO_TITLE               "INFO SD"
#define TR_SD_TYPE                     "Type:"
#define TR_SD_SPEED                    "Vitesse:"
#define TR_SD_SECTORS                  "Secteurs:"
#define TR_SD_SIZE                     "Taille:"
#define TR_TYPE                        INDENT "Type"
#define TR_GLOBAL_VARS                 "Variables Globales"
#define TR_GVARS                       "V. GLOBALES"
#define TR_GLOBAL_VAR                  "Variable globale"
#define TR_MENU_GLOBAL_VARS              "VARIABLES GLOBALES"
#define TR_OWN                         "Perso"
#define TR_DATE                        "Date"
#define TR_MONTHS                      { "Jan", "Fév", "Mar", "Avr", "Mai", "Jun", "Jul", "Aou", "Sep", "Oct", "Nov", "Dec" }
#define TR_ROTARY_ENCODER              "Enc.Rot."
#define TR_ROTARY_ENC_MODE             TR("RotEnc Mode","Mode Encodage Rotatif")
#define TR_CHANNELS_MONITOR            "MONITEUR CANAUX"
#define TR_MIXERS_MONITOR              "MONITEUR MIXAGES "
#define TR_PATH_TOO_LONG               "Chemin trop long"
#define TR_VIEW_TEXT                   "Voir texte"
#define TR_FLASH_BOOTLOADER            "Flasher BootLoader"
#define TR_FLASH_DEVICE                TR("Flash device","Flasher Périphérique")
#define TR_FLASH_EXTERNAL_DEVICE       TR("Flash S.Port", "Flasher S.Port externe")
#define TR_FLASH_RECEIVER_OTA          "Flasher RX OTA"
#define TR_FLASH_RECEIVER_BY_EXTERNAL_MODULE_OTA "Flash RX by ext. OTA"
#define TR_FLASH_RECEIVER_BY_INTERNAL_MODULE_OTA "Flash RX by int. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_EXTERNAL_MODULE_OTA "Flasher via OTA Ext."
#define TR_FLASH_FLIGHT_CONTROLLER_BY_INTERNAL_MODULE_OTA "Flasher via OTA Int"
#define TR_FLASH_BLUETOOTH_MODULE      TR("Flash module BT", "Flasher Module Bluetooth")
#define TR_FLASH_POWER_MANAGEMENT_UNIT "Flasher pwr mngt unit"
#define TR_DEVICE_NO_RESPONSE          TR("Device not responding", "Pas de réponse du Périph.")
#define TR_DEVICE_FILE_ERROR           TR("Device file prob.", "Prob. fichier Périph.")
#define TR_DEVICE_DATA_REFUSED         TR("Device data refused", "Data Périph. refusée")
#define TR_DEVICE_WRONG_REQUEST        TR("Device access problem", "Prob. accès au Périph.")
#define TR_DEVICE_FILE_REJECTED        TR("Device file refused", "Fichier Périph. refusé")
#define TR_DEVICE_FILE_WRONG_SIG       TR("Device file sig.", " Sign. Fich. Périph.")
#define TR_CURRENT_VERSION             "Version courante :"
#define TR_FLASH_INTERNAL_MODULE       TR("Flash int. Module", "Flasher module interne")
#define TR_FLASH_INTERNAL_MULTI        TR("Flash Int. Multi", "Flasher Module Interne")
#define TR_FLASH_EXTERNAL_MODULE       TR("Flash ext. module", "Flasher module externe")
#define TR_FLASH_EXTERNAL_MULTI        TR("Flash Ext. Multi", "Flasher Mod Ext.")
#define TR_FLASH_EXTERNAL_ELRS         TR("Flash Ext. ELRS", "Flasher ELRS Ext. ")
#define TR_FIRMWARE_UPDATE_ERROR       TR("Erreur màj FW","Erreur de mise à jour")
#define TR_FIRMWARE_UPDATE_SUCCESS     "Flash ok"
#define TR_WRITING                     "Écriture..."
#define TR_CONFIRM_FORMAT              "Confirmer Formatage?"
#define TR_INTERNALRF                  "HF interne"
#define TR_INTERNAL_MODULE             TR("Module int.","Module interne")
#define TR_EXTERNAL_MODULE             TR("Module ext.","Module externe")
#define TR_OPENTX_UPGRADE_REQUIRED     "Màj OpenTX nécessaire"
#define TR_TELEMETRY_DISABLED          "Télém. désactivée"
#define TR_MORE_OPTIONS_AVAILABLE      "Autres options disponibles"
#define TR_NO_MODULE_INFORMATION       "Pas d'info module"
#define TR_EXTERNALRF                  "HF externe"
#define TR_FAILSAFE                    TR(INDENT "Failsafe", INDENT "Type failsafe")
#define TR_FAILSAFESET                 "RÉGLAGES FAILSAFE"
#define TR_REG_ID                      TR("ID Enr.", "ID Enregistr.")
#define TR_OWNER_ID                    "ID Radio"
#define TR_HOLD                        "Maintien"
#define TR_HOLD_UPPERCASE              "MAINTIEN"
#define TR_NONE                        "Aucun"
#define TR_NONE_UPPERCASE              "AUCUN"
#define TR_MENUSENSOR                  "CAPTEUR"
#define TR_POWERMETER_PEAK             "Pic"
#define TR_POWERMETER_POWER            "Puiss"
#define TR_POWERMETER_ATTN             "Attn"
#define TR_POWERMETER_FREQ             "Fréq."
#define TR_MENUTOOLS                   "OUTILS"
#define TR_TURN_OFF_RECEIVER           "Éteindre récepteur."
#define TR_STOPPING                    "Arrêt..."
#define TR_MENU_SPECTRUM_ANALYSER      "ANALYSEUR SPECTRE"
#define TR_MENU_POWER_METER            "MESURE PUISS."
#define TR_SENSOR                      "CAPTEUR"
#define TR_COUNTRY_CODE                 TR("Zone géo.", "Zone géographique")
#define TR_USBMODE                     "Mode USB"
#define TR_JACK_MODE                    "Mode Jack"
#define TR_VOICE_LANGUAGE                   TR("Langue voix", "Langue annonces vocales")
#define TR_UNITS_SYSTEM                 "Unités"
#define TR_EDIT                        "Editer"
#define TR_INSERT_BEFORE               "Insérer avant"
#define TR_INSERT_AFTER                "Insérer après"
#define TR_COPY                        "Copier"
#define TR_MOVE                        "Déplacer"
#define TR_PASTE                       "Coller"
#define TR_PASTE_AFTER                 "Coller Après"
#define TR_PASTE_BEFORE                "Coller Avant"
#define TR_DELETE                      "Supprimer"
#define TR_INSERT                      "Insérer"
#define TR_RESET_FLIGHT                TR("Réinit. vol", "Réinitialiser vol")
#define TR_RESET_TIMER1                TR("Réinit. Timer1", "Réinitialiser Timer1")
#define TR_RESET_TIMER2                TR("Réinit. Timer2", "Réinitialiser Timer2")
#define TR_RESET_TIMER3                TR("Réinit. Timer3", "Réinitialiser Timer3")
#define TR_RESET_TELEMETRY             TR("Réinit. Télém.", "Réinit. Télémétrie")
#define TR_STATISTICS                  "Statistiques"
#define TR_ABOUT_US                    "A propos"
#define TR_USB_JOYSTICK                "USB Joystick (HID)"
#define TR_USB_MASS_STORAGE            "Stockage USB (SD)"
#define TR_USB_SERIAL                  "Port série (VCP)"
#define TR_SETUP_SCREENS               "Configuration écrans"
#define TR_MONITOR_SCREENS             "Moniteurs"
#define TR_AND_SWITCH                  "ET suppl."
#define TR_SF                          "FS"
#define TR_GF                          "FG"
#define TR_ANADIAGS_CALIB              "Analogiques calibrés"
#define TR_ANADIAGS_FILTRAWDEV         "Filtered raw analogs with deviation"
#define TR_ANADIAGS_UNFILTRAW          "Unfiltered raw analogs"
#define TR_ANADIAGS_MINMAX             "Min., max. et courses"
#define TR_ANADIAGS_MOVE               "Déplacer les analogiques à leurs extrêmes!"
#define TR_SPEAKER                     INDENT "Haut-p."
#define TR_BUZZER                      INDENT "Bipeur"
#define TR_BYTES                       "bytes"
#define TR_MODULE_BIND                 BUTTON(TR("Bnd", "Bind"))
#define TR_POWERMETER_ATTN_NEEDED      "Atténuateur requis"
#define TR_PXX2_SELECT_RX              "Sélectionner RX..."
#define TR_PXX2_DEFAULT                "<défaut>"
#define TR_BT_SELECT_DEVICE            "Sélectionner appareil"
#define TR_DISCOVER                    "Découvrir"
#define TR_BUTTON_INIT                 BUTTON("Init")
#define TR_WAITING                     "Attente..."
#define TR_RECEIVER_DELETE             "Suppr récept.?"
#define TR_RECEIVER_RESET              "Réinitialiser récept.?"
#define TR_SHARE                       "Partager"
#define TR_BIND                        "Bind"
#define TR_REGISTER                    TR("Enr", "Enregistr.")
#define TR_MODULE_RANGE                BUTTON(TR("Prt", "Port."))
#define TR_RECEIVER_OPTIONS            TR("OPTIONS REC.", "OPTIONS RÉCEPTEUR")
#define TR_RESET_BTN                   BUTTON("RAZ")
#define TR_DEBUG                       "Debug"
#define TR_KEYS_BTN                    BUTTON(TR("Btns","Inters"))
#define TR_ANALOGS_BTN                 BUTTON(TR("Anas", "Analogs"))
#define TR_TOUCH_NOTFOUND              "Écran tactile non trouvé"
#define TR_TOUCH_EXIT                  "Toucher écran pour quitter"
#define TR_SET                         BUTTON("Déf")
#define TR_TRAINER                     "Écolage"
#define TR_CHANS                       "Chans"
#define TR_ANTENNAPROBLEM              CENTER "Antenne radio défect.!"
#define TR_MODELIDUSED                 TR("ID affecté à :", "No de récepteur utilisé par :")
#define TR_MODELIDUNIQUE               "ID est unique"
#define TR_MODULE                      "Module"
#define TR_RX_NAME                     "Nom Rx"
#define TR_TELEMETRY_TYPE              TR("Type tél.", "Type télémétrie")
#define TR_TELEMETRY_SENSORS           "Capteurs"
#define TR_VALUE                       "Valeur"
#define TR_PERIOD                      "Période"
#define TR_INTERVAL                    "Intervalle"
#define TR_REPEAT                      "Répéter"
#define TR_ENABLE                      "Activer"
#define TR_DISABLE                     "Désactiver"
#define TR_TOPLCDTIMER                 "Timer LCD haut"
#define TR_UNIT                        "Unité"
#define TR_TELEMETRY_NEWSENSOR         TR(INDENT"Nouveau capteur...", INDENT "Ajouter nouveau capteur")
#define TR_CHANNELRANGE                TR(INDENT "Canaux", INDENT "Plage de canaux")
#define TR_AFHDS3_RX_FREQ              TR("RX freq.", "Fréquence RX")
#define TR_AFHDS3_ONE_TO_ONE_TELEMETRY TR("Unicast/Tel.", "Unicast/Telemetry")
#define TR_AFHDS3_ONE_TO_MANY          "Multicast"
#define TR_AFHDS3_ACTUAL_POWER         TR("Act. pow", "Puissance actuelle")
#define TR_AFHDS3_POWER_SOURCE         TR("Power src.", "Source puissance")
#define TR_ANTENNACONFIRM1             "Vraiment changer?"
#if defined(PCBX12S)
#define TR_ANTENNA_MODES               "Interne","Demander","Par modèle","Interne + Externe"
#else
#define TR_ANTENNA_MODES               "Interne","Demander","Par modèle","Externe"
#endif
#define TR_USE_INTERNAL_ANTENNA        TR("Util antenne int", "Utiliser antenne interne")
#define TR_USE_EXTERNAL_ANTENNA        TR("Util antenne ext", "Utiliser antenne externe")
#define TR_ANTENNACONFIRM2             TR("Vérif antenne", "Installer l'antenne d'abord!")
#define TR_MODULE_PROTOCOL_FLEX_WARN_LINE1        "Nécessite firm."
#define TR_MODULE_PROTOCOL_FCC_WARN_LINE1         "Nécessite FCC"
#define TR_MODULE_PROTOCOL_EU_WARN_LINE1          "Nécessite EU"
#define TR_MODULE_PROTOCOL_WARN_LINE2             "R9M non certifié"
#define TR_LOWALARM                    INDENT "Alarme basse"
#define TR_CRITICALALARM               INDENT "Alarme critique"
#define TR_RSSIALARM_WARN              TR("RSSI", "TELEMETRIE")
#define TR_NO_RSSIALARM                TR(INDENT "Alarmes désact.", "Alarme télémétrie désactivée")
#define TR_DISABLE_ALARM               TR(INDENT "Désact. alarme", INDENT "Désactiver alarme télémétrie")
#define TR_POPUP                       "Popup"
#define TR_MIN                         "Min"
#define TR_MAX                         "Max"
#define TR_CURVE_PRESET                "Courbe standard..."
#define TR_PRESET                      "Pente"
#define TR_MIRROR                      "Miroir"
#define TR_CLEAR                       "Effacer"
#define TR_RESET                       "Réinitialiser"
#define TR_RESET_SUBMENU               "Réinitialiser..."
#define TR_COUNT                       "Nb points"
#define TR_PT                          "pt"
#define TR_PTS                         "pts"
#define TR_SMOOTH                      "Lissage"
#define TR_COPY_STICKS_TO_OFS          TR("Cpy stick->subtrim", "Manche vers subtrim")
#define TR_COPY_MIN_MAX_TO_OUTPUTS     TR("Cpy min/max to all",  "Copier min/max/centre vers toutes sorties")
#define TR_COPY_TRIMS_TO_OFS           TR("Cpy trim->subtrim", "Trim vers subtrim")
#define TR_INCDEC                      "Inc/décrémenter"
#define TR_GLOBALVAR                   "Var. globale"
#define TR_MIXSOURCE                   "Source mixeur"
#define TR_CONSTANT                    "Constante"
#define TR_PREFLIGHT_POTSLIDER_CHECK   "Off","On","Auto"
#define TR_PREFLIGHT                   "Vérifications avant vol"
#define TR_CHECKLIST                   TR(INDENT "Notes", INDENT "Afficher notes")
#define TR_AUX_SERIAL_MODE             "Port série"
#define TR_AUX2_SERIAL_MODE            "Port série 2"
#define TR_AUX_SERIAL_PORT_POWER       "Port power"
#define TR_SCRIPT                      "Script"
#define TR_INPUTS                      "Entrées"
#define TR_OUTPUTS                     "Sorties"
#if defined(COLORLCD)
#define STR_EEBACKUP                   "Sauvegarder l'EEPROM"
#define STR_FACTORYRESET               "RAZ d'usine"
#elif defined(PCBXLITE)
#define STR_EEBACKUP                   "Sauvegarde"
#define STR_FACTORYRESET               "RAZ usine"
#else
#define STR_EEBACKUP                   TR("Sauvegarde", "Sauvegarder l'EEPROM")
#define STR_FACTORYRESET               "RAZ d'usine"
#endif
#define TR_CONFIRMRESET                TR("Effacer TOUT?","Effacer TOUS modèles/réglages?")
#define TR_TOO_MANY_LUA_SCRIPTS         "Trop de scripts lua!"
#define TR_SPORT_UPDATE_POWER_MODE     "SP Power"
#define TR_SPORT_UPDATE_POWER_MODES    "AUTO","ON"
#define TR_NO_TELEMETRY_SCREENS        "Pas d’Écran de Télémétrie"
#define TR_TOUCH_PANEL                 "Écran Tactile:"
#define TR_FILE_SIZE                   "Taille fichier"
#define TR_FILE_OPEN                   "Ouvrir quand même?"
#define TR_TIMER_MODES                 {TR_OFFON,TR_START,TR_THROTTLE_LABEL,TR_THROTTLE_PERCENT_LABEL,TR_THROTTLE_START}

// Horus and Taranis column headers
#define TR_PHASES_HEADERS_NAME         "Nom"
#define TR_PHASES_HEADERS_SW           "Inter"
#define TR_PHASES_HEADERS_RUD_TRIM     "Trim Dir"
#define TR_PHASES_HEADERS_ELE_TRIM     "Trim Prf"
#define TR_PHASES_HEADERS_THT_TRIM     "Trim Gaz"
#define TR_PHASES_HEADERS_AIL_TRIM     "Trim Ail"
#define TR_PHASES_HEADERS_CH5_TRIM     "Trim 5"
#define TR_PHASES_HEADERS_CH6_TRIM     "Trim 6"
#define TR_PHASES_HEADERS_FAD_IN       "Fondu ON"
#define TR_PHASES_HEADERS_FAD_OUT      "Fondu OFF"

#define TR_LIMITS_HEADERS_NAME         "Nom"
#define TR_LIMITS_HEADERS_SUBTRIM      "Subtrim"
#define TR_LIMITS_HEADERS_MIN          "Min"
#define TR_LIMITS_HEADERS_MAX          "Max"
#define TR_LIMITS_HEADERS_DIRECTION    "Direction"
#define TR_LIMITS_HEADERS_CURVE        "Courbe"
#define TR_LIMITS_HEADERS_PPMCENTER    "Neutre PPM"
#define TR_LIMITS_HEADERS_SUBTRIMMODE  "Mode subtrim"
#define TR_INVERTED                    "Inversé"


#define TR_LSW_DESCRIPTIONS            { "Type de comparaison ou fonction", "Première variable", "Seconde variable ou constante", "Seconde variable ou constante", "Condition supplémentaire pour activer la ligne", "Durée minimale d'activation de l'inter logique", "Durée min de la condition avant l'activation de l'inter" }

#if defined(COLORLCD)
  // Horus layouts and widgets
  #define TR_FIRST_CHANNEL             "Premier Canal"
  #define TR_FILL_BACKGROUND           "Remplir l'arrière-plan?"
  #define TR_BG_COLOR                  "BG Color"
  #define TR_SLIDERS_TRIMS             "Curseurs+Trims"
  #define TR_SLIDERS                   "Curseurs"
  #define TR_FLIGHT_MODE               "Mode de vol"
  #define TR_INVALID_FILE              "Fichier invalide"
  #define TR_TIMER_SOURCE              "Source Chrono"
  #define TR_SIZE                      "Taille"
  #define TR_SHADOW                    "Ombre"
  #define TR_ALIGN_LABEL               "Aligner la catégorie"
  #define TR_ALIGN_VALUE               "Aligner la valeur"
  #define TR_ALIGN_OPTS                { "Gauche", "Centre", "Droite" }
  #define TR_TEXT                      "Texte"
  #define TR_COLOR                     "Couleur"
  #define TR_MAIN_VIEW_X               "Vue principale XX"
  #define TR_PANEL1_BACKGROUND         "Arrière-plan Ecran1"
  #define TR_PANEL2_BACKGROUND         "Arrière-plan Ecran2"
  #define TR_WIDGET_GAUGE              "Jauge"
  #define TR_WIDGET_MODELBMP           "Modèles"
  #define TR_WIDGET_OUTPUTS            "Sorties"
  #define TR_WIDGET_TEXT               "Texte"
  #define TR_WIDGET_TIMER              "Chrono"
  #define TR_WIDGET_VALUE              "Valeur"
#endif

// Bootloader common - Ascii only
#define TR_BL_USB_CONNECT_BOOT        CENTER "\011USB Connecté"
#define TR_BL_USB_CONNECTED           "USB Connecté"
#define TR_BL_USB_PLUGIN              "ou branchez un câble USB"
#define TR_BL_USB_MASS_STORE          "pour le stockage de masse"
#define TR_BL_USB_PLUGIN_MASS_STORE   "ou branchez un câble USB pour le stockage de masse"
#define TR_BL_WRITE_FW                "Écriture Firmware"
#define TR_BL_FORK                    "Fork:"
#define TR_BL_VERSION                 "Version:"
#define TR_BL_RADIO                   "Radio:"
#define TR_BL_EXIT                    "Sortie"
#define TR_BL_DIR_MISSING             " Répertoire absent"
#define TR_BL_DIR_EMPTY               " Répertoire vide"

#if LCD_W >= 480
  #define TR_BL_INVALID_FIRMWARE       "Fichier firmware non valide"
#elif LCD_W >= 212
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN_MASS_STORE
  #define TR_BL_HOLD_ENTER_TO_START    "\012Hold [ENT] to start writing"
  #define TR_BL_INVALID_FIRMWARE       "\011 Fichier firmware non valide !        "
  #define TR_BL_INVALID_EEPROM         "\011Fichier EEPROM non valide!          "
#else
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN
  #define TR_BL_HOLD_ENTER_TO_START    "\006Hold [ENT] to start"
  #define TR_BL_INVALID_FIRMWARE       "\004Firmware non valide !        "
  #define TR_BL_INVALID_EEPROM         "\004EEPROM non valide!          "
#endif

#if defined(PCBTARANIS)
   // Bootloader Taranis specific - Ascii only
  #define TR_BL_RESTORE_EEPROM        "Restaurer EEPROM"
  #define TR_BL_WRITING_FW            CENTER "\015Écriture ..."
  #define TR_BL_WRITING_COMPL         CENTER "\007Écriture terminée"
  #if defined(RADIO_COMMANDO8)
    #define TR_BL_POWER_KEY           "Appuyez sur le bouton power."
    #define TR_BL_FLASH_EXIT          "Quitter le mode flashage."
  #endif
#elif defined(PCBHORUS)
   // Bootloader Horus specific - Ascii only
  #define TR_BL_WRITING_FW            "Écriture Firmware ..."
  #define TR_BL_WRITING_COMPL         "Écriture terminée"
  #define TR_BL_SELECT_KEY            "[ENT] pour select. fichier"
  #define TR_BL_FLASH_KEY             "Appui long [ENT] pour flasher"
  #define TR_BL_EXIT_KEY              "[RTN] pour quitter"
#elif defined(PCBNV14)
   // Bootloader NV14 specific - Ascii only
  #define TR_BL_WRITING_FW            "Écriture Firmware ..."
  #define TR_BL_WRITING_COMPL         "Écriture terminée"
  #define TR_BL_RF_USB_ACCESS         "RF USB access"
  #define TR_BL_CURRENT_FW            "Firmware actuel:"
  #define TR_BL_SELECT_KEY            "[R TRIM] pour sélectionner fichier"
  #define TR_BL_FLASH_KEY             "Appui long [R TRIM] pour flasher"
  #define TR_BL_EXIT_KEY              " [L TRIM] pour quitter"
  #define TR_BL_ENABLE                "Activer"
  #define TR_BL_DISABLE               "Désactiver"
#endif

// About screen
#define TR_ABOUTUS                     TR(" A PROPOS ", "A PROPOS")

#define TR_CHR_HOUR                    'h'
#define TR_CHR_INPUT                   'E'   // Values between A-I will work

#define TR_BEEP_VOLUME                 "Volume bips"
#define TR_WAV_VOLUME                  "Volume audio"
#define TR_BG_VOLUME                   "Volume musique"

#define TR_TOP_BAR                     "Barre titre"
#define TR_FLASH_ERASE                 "effacer Flash..."
#define TR_FLASH_WRITE                 "écrire Flash..."
#define TR_OTA_UPDATE                  "Mise à jour OTA ..."
#define TR_MODULE_RESET                "RAZ Module..."
#define TR_UNKNOWN_RX                  "RX inconnu"
#define TR_UNSUPPORTED_RX              "RX non supporté"
#define TR_OTA_UPDATE_ERROR            "Erreur mise à jour OTA"
#define TR_DEVICE_RESET                "RAZ Périphérique..."
#define TR_ALTITUDE                    INDENT "Altitude"
#define TR_SCALE                       "Échelle"
#define TR_VIEW_CHANNELS               "Voir voies"
#define TR_VIEW_NOTES                  "Voir notes"
#define TR_MODEL_SELECT                "Sélection modèle"
#define TR_ID                          "ID"
#define TR_PRECISION                   "Précision"
#define TR_RATIO                       "Ratio"
#define TR_FORMULA                     "Formule"
#define TR_CELLINDEX                   "Index élém."
#define TR_LOGS                        "Logs"
#define TR_OPTIONS                     "Options"
#define TR_FIRMWARE_OPTIONS            "Firmware options"

#define TR_ALTSENSOR                   "Capteur Alt"
#define TR_CELLSENSOR                  "Capteur Elém."
#define TR_GPSSENSOR                   "Capteur GPS"
#define TR_CURRENTSENSOR               "Capteur"
#define TR_AUTOOFFSET                  "Offset auto"
#define TR_ONLYPOSITIVE                "Positif"
#define TR_FILTER                      "Filtrage"
#define TR_TELEMETRYFULL               "Plus de capteurs libres!"
#define TR_INVERTED_SERIAL             INDENT "Inversé"
#define TR_IGNORE_INSTANCE             TR(INDENT "Ign. inst", INDENT "Ignorer instance")
#define TR_DISCOVER_SENSORS            "Découvrir capteurs"
#define TR_STOP_DISCOVER_SENSORS       "Terminer découverte"
#define TR_DELETE_ALL_SENSORS          TR("Suppr. tous capteurs", "Supprimer tous capteurs")
#define TR_CONFIRMDELETE               TR("Tout effacer?", "Vraiment tout " LCDW_128_480_LINEBREAK "effacer ?")
#define TR_SELECT_WIDGET               "Sélect. widget"
#define TR_WIDGET_FULLSCREEN           "Plein Écran"
#define TR_REMOVE_WIDGET               "Supprimer widget"
#define TR_WIDGET_SETTINGS             "Réglages widget"
#define TR_REMOVE_SCREEN               "Supprimer écran"
#define TR_SETUP_WIDGETS               "Configurer widgets"
#define TR_USER_INTERFACE              "Interface utilisateur"
#define TR_THEME                       "Thème"
#define TR_SETUP                       "Configuration"
#define TR_LAYOUT                      "Disposition"
#define TR_ADD_MAIN_VIEW                 "Ajouter vue principale"
#define TR_BACKGROUND_COLOR            "Couleur de fond"
#define TR_MAIN_COLOR                  "Couleur principale"
#define TR_BAR2_COLOR                  "Couleur de la barre second."
#define TR_BAR1_COLOR                  "Couleur de la barre principale"
#define TR_TEXT_COLOR                  "Couleur Texte"
#define TR_TEXT_VIEWER                 "Visualisateur de texte"

#define TR_MENU_INPUTS                  STR_CHAR_INPUT "Entrées"
#define TR_MENU_LUA                     STR_CHAR_LUA "Scripts Lua"
#define TR_MENU_STICKS                   STR_CHAR_STICK "Manches"
#define TR_MENU_POTS                    STR_CHAR_POT "Pots"
#define TR_MENU_MAX                     STR_CHAR_FUNCTION "MAX"
#define TR_MENU_HELI                    STR_CHAR_CYC "Cyclique"
#define TR_MENU_TRIMS                    STR_CHAR_TRIM "Trims"
#define TR_MENU_SWITCHES                STR_CHAR_SWITCH "Inters"
#define TR_MENU_LOGICAL_SWITCHES        STR_CHAR_SWITCH "Inters logiques"
#define TR_MENU_TRAINER                 STR_CHAR_TRAINER "Écolage"
#define TR_MENU_CHANNELS                STR_CHAR_CHANNEL "Canaux"
#define TR_MENU_GVARS                   STR_CHAR_SLIDER "Vars. glob."
#define TR_MENU_TELEMETRY               STR_CHAR_TELEMETRY "Télémétrie"
#define TR_MENU_DISPLAY                "AFFICHAGE"
#define TR_MENU_OTHER                  "Autres"
#define TR_MENU_INVERT                 "Inverser"
#define TR_JITTER_FILTER               "Filtre ADC"
#define TR_DEAD_ZONE                   "Dead zone"
#define TR_RTC_CHECK                   TR("Vérif. RTC", "Vérif. pile RTC")
#define TR_AUTH_FAILURE                "Échec authentification"
#define TR_RACING_MODE                 "Mode Racing"

#undef  STR_SENSOR_BATT
#define STR_SENSOR_BATT                 "BtRx"


#define TR_USE_THEME_COLOR              "Utiliser la couleur du thème"

#define TR_ADD_ALL_TRIMS_TO_SUBTRIMS    "Ajouter tous les trims aux sub-trims"
#if LCD_W > LCD_H
  #define TR_OPEN_CHANNEL_MONITORS        "Ouvrir Moniteur de Canal"
#else
  #define TR_OPEN_CHANNEL_MONITORS        "Ouvrir Mon. de Canal"
#endif
#define TR_DUPLICATE                    "Dupliquer"
#define TR_ACTIVATE                     "Activer"
#define TR_RED                          "Rouge"
#define TR_BLUE                         "Bleu"
#define TR_GREEN                        "Vert"
#define TR_COLOR_PICKER                 "Pipette à couleurs"
#define TR_EDIT_THEME_DETAILS           "Éditer Détails Thème"
#define TR_AUTHOR                       "Auteur"
#define TR_DESCRIPTION                  "Description"
#define TR_SAVE                         "Sauvegarder"
#define TR_CANCEL                       "Annuler"
#define TR_EDIT_THEME                   "ÉDITER THÈME"
#define TR_DETAILS                      "Détails"
#define TR_THEME_EDITOR                 "THÈMES"

// Main menu
#define TR_MAIN_MENU_SELECT_MODEL       "Select\nModèle"
#define TR_MAIN_MENU_MANAGE_MODELS      "Gestion\nModèles"
#define TR_MAIN_MENU_MODEL_NOTES        "Modèle\nNotes"
#define TR_MAIN_MENU_CHANNEL_MONITOR    "Canal\nMoniteur"
#define TR_MAIN_MENU_MODEL_SETTINGS     "Modèle\nParamètres"
#define TR_MAIN_MENU_RADIO_SETTINGS     "Radio\nParamètres"
#define TR_MAIN_MENU_SCREEN_SETTINGS    "Écrans\nParamètres"
#define TR_MAIN_MENU_RESET_TELEMETRY    "RAZ\nTélémetrie"
#define TR_MAIN_MENU_STATISTICS         "Statistiques"
#define TR_MAIN_MENU_ABOUT_EDGETX       "A PROPOS\nEdgeTX"
// End Main menu

// Voice in native language
#define TR_VOICE_ENGLISH                "English"
#define TR_VOICE_CHINESE                "Chinese"
#define TR_VOICE_CZECH                  "Czech"
#define TR_VOICE_DANISH                 "Danish"
#define TR_VOICE_DEUTSCH                "Deutsch"
#define TR_VOICE_DUTCH                  "Dutch"
#define TR_VOICE_ESPANOL                "Espanol"
#define TR_VOICE_FRANCAIS               "Francais"
#define TR_VOICE_HUNGARIAN              "Hungarian"
#define TR_VOICE_ITALIANO               "Italiano"
#define TR_VOICE_POLISH                 "Polish"
#define TR_VOICE_PORTUGUES              "Portugues"
#define TR_VOICE_RUSSIAN                "Russian"
#define TR_VOICE_SLOVAK                 "Slovak"
#define TR_VOICE_SWEDISH                "Swedish"
#define TR_VOICE_TAIWANESE              "Taiwanese"
#define TR_VOICE_JAPANESE               "Japanese"

#define TR_USBJOYSTICK_LABEL           "USB Joystick"
#define TR_USBJOYSTICK_EXTMODE         "Mode"
#define TR_VUSBJOYSTICK_EXTMODE        "Classic","Advanced"  "Classique","Avancé"
#define TR_USBJOYSTICK_SETTINGS        "Channel Settings" "Affectation Voies"
#define TR_USBJOYSTICK_IF_MODE         TR("If. mode","Interface mode")
#define TR_VUSBJOYSTICK_IF_MODE        "Joystick","Gamepad","MultiAxis"
#define TR_USBJOYSTICK_CH_MODE         "Mode"
#define TR_VUSBJOYSTICK_CH_MODE        "None","Btn","Axis","Sim"
#define TR_VUSBJOYSTICK_CH_MODE_S      "-","B","A","S"
#define TR_USBJOYSTICK_CH_BTNMODE      "Mode Bouton"
#define TR_VUSBJOYSTICK_CH_BTNMODE     "Normal","Pulse","SWEmu","Delta","Companion"
#define TR_VUSBJOYSTICK_CH_BTNMODE_S   TR("Norm","Normal"),TR("Puls","Pulse"),TR("SWEm","SWEmul"),TR("Delt","Delta"),TR("CPN","Companion")
#define TR_USBJOYSTICK_CH_SWPOS        "Positions"
#define TR_VUSBJOYSTICK_CH_SWPOS       "Pousser","2POS","3POS","4POS","5POS","6POS","7POS","8POS"
#define TR_USBJOYSTICK_CH_AXIS         "Axes"
#define TR_VUSBJOYSTICK_CH_AXIS        "X","Y","Z","rotX","rotY","rotZ","Curseurs","Dial","Wheel"
#define TR_USBJOYSTICK_CH_SIM          "Sim axis"
#define TR_VUSBJOYSTICK_CH_SIM         "Ail","Prof","Dir","Mot"
#define TR_USBJOYSTICK_CH_INVERSION    "Inversion"
#define TR_USBJOYSTICK_CH_BTNNUM       "Bouton no."
#define TR_USBJOYSTICK_BTN_COLLISION   "!Bouton no. collision!"
#define TR_USBJOYSTICK_AXIS_COLLISION  "!Axe collision!"
#define TR_USBJOYSTICK_CIRC_COUTOUT    TR("Circ. cut", "Circular cutout")
#define TR_VUSBJOYSTICK_CIRC_COUTOUT   "None","X-Y, Z-rX","X-Y, rX-rY"
#define TR_USBJOYSTICK_APPLY_CHANGES   "Appliquer changements"