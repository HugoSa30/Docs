/*
 * Program: n42.bin
 * Function: FUN_00179274
 * Entry: 00179274
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00179274(void)

{
  if ((B_fa == '\0') || (B_fadmtle == '\0')) {
LAB_001792d4:
    if (DAT_003fb1ac == '\0') goto LAB_001792f0;
  }
  else if (DAT_003fb1ac == '\0') {
    DAT_003fb1ad = '2';
    DAT_003fb1ac = '\x01';
    goto LAB_001792d4;
  }
  DAT_003fb1ad = DAT_003fb1ad + -1;
LAB_001792f0:
  if ((DAT_003fb1ad == '\0') && (DAT_003fb1ac != '\0')) {
    DAT_003fb1ac = '\0';
    B_fadmtle = '\0';
    vvtal = 0;
  }
  if (B_bttev != '\0') {
    if (B_tevet == '\0') {
      B_tevet = '\x01';
      DAT_005b9171 = DAT_005b9176;
    }
    else if (DAT_005b9171 == '\0') {
      B_tevet = '\0';
    }
    else {
      DAT_005b9171 = DAT_005b9171 + -1;
    }
  }
  if (B_bthsv != '\0') {
    if (DAT_003fc0d8 == '\0') {
      if (DAT_005b916e == '\0') {
        DAT_003fc0d8 = '\x01';
      }
      else {
        DAT_005b916e = DAT_005b916e + -1;
      }
    }
    else {
      DAT_003fc0d8 = '\0';
      DAT_005b916e = DAT_005b9174;
    }
  }
  if (B_bthsh != '\0') {
    if (DAT_003fc0d6 == '\0') {
      if (DAT_005b916c == '\0') {
        DAT_003fc0d6 = '\x01';
      }
      else {
        DAT_005b916c = DAT_005b916c + -1;
      }
    }
    else {
      DAT_003fc0d6 = '\0';
      DAT_005b916c = DAT_005b9172;
    }
  }
  if (B_bthsv2 != '\0') {
    if (DAT_003fc0d7 == '\0') {
      if (DAT_005b916d == '\0') {
        DAT_003fc0d7 = '\x01';
      }
      else {
        DAT_005b916d = DAT_005b916d + -1;
      }
    }
    else {
      DAT_003fc0d7 = '\0';
      DAT_005b916d = DAT_005b9175;
    }
  }
  if (B_bthsh2 != '\0') {
    if (DAT_003fc0d5 == '\0') {
      if (DAT_005b916b == '\0') {
        DAT_003fc0d5 = '\x01';
      }
      else {
        DAT_005b916b = DAT_005b916b + -1;
      }
    }
    else {
      DAT_003fc0d5 = '\0';
      DAT_005b916b = DAT_005b9173;
    }
  }
  if (B_bt != '\0') {
    if ((B_btev1 != '\0') && (nmot_w == 0)) {
      FUN_00168480(1);
    }
    if (B_bt != '\0') {
      if ((B_btev2 != '\0') && (nmot_w == 0)) {
        FUN_00168480(2);
      }
      if (B_bt != '\0') {
        if ((B_btev3 != '\0') && (nmot_w == 0)) {
          FUN_00168480(3);
        }
        if (((B_bt != '\0') && (B_btev4 != '\0')) && (nmot_w == 0)) {
          FUN_00168480(4);
        }
      }
    }
  }
  if (((B_nmot != '\0') || (B_kl15 == 0)) && ((B_st == '\0' && (B_ll == '\0')))) {
    B_faevz = 0;
    devoff = 0;
  }
  return;
}

