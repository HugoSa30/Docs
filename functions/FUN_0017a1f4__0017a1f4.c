/*
 * Program: n42.bin
 * Function: FUN_0017a1f4
 * Entry: 0017a1f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017a1f4(void)

{
  bool bVar1;
  
  if ((((B_genoff == 0) && (_DAT_001c9ce0 < nmot_w)) && (B_genfbsd == 0)) && (B_genactiv != 0)) {
    en_gendiag = true;
  }
  else {
    en_gendiag = false;
  }
  if ((B_genfbsd == 0) || ((DAT_001c9cec >> 4 & 1) == 0)) {
    gfehlin1 = 0;
  }
  else {
    gfehlin1 = 1;
  }
  if (gfehlin1 != 0) {
    if (dgbhealctr != 0) {
      dgbhealctr = dgbhealctr - 1;
    }
    if (dgerrctr1 < DAT_001c9ceb) {
      dgerrctr1 = dgerrctr1 + 1;
    }
    else {
      dgerrctr1 = 0;
      dgbhealctr = 0;
      B_dodgenbs = 1;
      genfbsak = 0xb;
    }
    goto LAB_0017a450;
  }
  if (dgerrctr1 != 0) {
    dgerrctr1 = dgerrctr1 - 1;
  }
  if ((B_genfkupl == 0) || ((DAT_001c9cec >> 5 & 1) == 0)) {
    gfehlin2 = false;
  }
  else {
    gfehlin2 = true;
  }
  if ((bool)en_gendiag) {
    if ((bool)gfehlin2) {
      if (dgbhealctr != 0) {
        dgbhealctr = dgbhealctr - 1;
      }
      if (dgerrctr2 < DAT_001c9ce5) {
        dgerrctr2 = dgerrctr2 + 1;
      }
      else {
        dgerrctr2 = 0;
        dgbhealctr = 0;
        B_dodgenbs = 1;
        genfbsak = 0xc;
      }
      goto LAB_0017a3e4;
    }
  }
  else {
LAB_0017a3e4:
    if ((bool)gfehlin2) goto LAB_0017a450;
  }
  if (dgerrctr2 != 0) {
    dgerrctr2 = dgerrctr2 - 1;
  }
  if (dgbhealctr < DAT_001c9ce6) {
    dgbhealctr = dgbhealctr + 1;
  }
  else {
    dgerrctr2 = 0;
    dgbhealctr = 0;
    B_dodgenbs = 1;
    genfbsak = 8;
  }
LAB_0017a450:
  if ((bool)en_gendiag) {
    if ((B_genfme == 0) || ((DAT_001c9cec >> 2 & 1) == 0)) {
      gfehlin3 = false;
    }
    else {
      gfehlin3 = true;
    }
    if ((bool)gfehlin3) {
      if (dghealctr != 0) {
        dghealctr = dghealctr - 1;
      }
      if (dgerrctr3 < DAT_001c9cea) {
        dgerrctr3 = dgerrctr3 + 1;
      }
      else {
        dgerrctr3 = 0;
        dghealctr = 0;
        B_dodgen = 1;
        genstatroh = 0xc;
      }
    }
    else {
      if (dgerrctr3 != 0) {
        dgerrctr3 = dgerrctr3 - 1;
      }
      if ((B_genfel == 0) || ((DAT_001c9cec >> 1 & 1) == 0)) {
        gfehlin4 = false;
      }
      else {
        gfehlin4 = true;
      }
      if ((bool)gfehlin4) {
        if (dghealctr != 0) {
          dghealctr = dghealctr - 1;
        }
        if (dgerrctr4 < DAT_001c9ce7) {
          dgerrctr4 = dgerrctr4 + 1;
        }
        else {
          dghealctr = 0;
          dgerrctr4 = 0;
          B_dodgen = 1;
          genstatroh = 0xb;
        }
      }
      else {
        if (dgerrctr4 != 0) {
          dgerrctr4 = dgerrctr4 - 1;
        }
        if ((B_genfht == 0) || ((DAT_001c9cec & 1) == 0)) {
          gfehlin5 = false;
        }
        else {
          gfehlin5 = true;
        }
        if ((bool)gfehlin5) {
          if (dghealctr != 0) {
            dghealctr = dghealctr - 1;
          }
          if (dgerrctr5 < DAT_001c9ce8) {
            dgerrctr5 = dgerrctr5 + 1;
          }
          else {
            genstatroh = 10;
            dgerrctr5 = 0;
            dghealctr = 0;
            B_dodgen = 1;
          }
        }
        else {
          if (dgerrctr5 != 0) {
            dgerrctr5 = dgerrctr5 - 1;
          }
          if (dghealctr < DAT_001c9ce9) {
            dghealctr = dghealctr + 1;
          }
          else {
            genstatroh = 8;
            dgerrctr5 = 0;
            dghealctr = 0;
            B_dodgen = 1;
          }
        }
      }
    }
  }
  func_0xff221d50(&DAT_003fb3e7,&UNK_003fb3e8,1,B_nmot,DAT_001c9ce4);
  if (B_nmot == '\0') {
    B_kl61 = 1;
  }
  else if (DAT_003fb3e7 == '\0') {
    if (((((B_gfnobsak != 0) && ((DAT_001c9ced >> 4 & 1) != 0)) ||
         ((B_gfbsupak != 0 && ((DAT_001c9ced >> 5 & 1) != 0)))) ||
        ((B_gfmeak != 0 && ((DAT_001c9ced >> 2 & 1) != 0)))) ||
       (((B_gfelak != 0 && ((DAT_001c9ced >> 1 & 1) != 0)) ||
        ((B_gfhtak != 0 && ((DAT_001c9ced & 1) != 0)))))) {
      kl61loc = 1;
    }
    B_kl61 = kl61loc;
  }
  else {
    B_kl61 = 1;
  }
  kl61loc = 0;
  bVar1 = false;
  if ((nmot_w < _DAT_001c9ce2) && (B_1stbsder != 0)) {
    if (((char)DAT_001c9ced < '\0') && (B_gfnobsak != 0)) {
      kl61loc = 1;
      bVar1 = true;
    }
    else {
      kl61loc = 0;
      bVar1 = false;
    }
  }
  else {
    B_1stbsder = 0;
  }
  if (((((B_gfnobsak != 0) && ((DAT_001c9ced >> 4 & 1) != 0)) ||
       ((B_gfbsupak != 0 && ((DAT_001c9ced >> 5 & 1) != 0)))) ||
      (((B_gfmeak != 0 && ((DAT_001c9ced >> 2 & 1) != 0)) ||
       ((B_gfelak != 0 && ((DAT_001c9ced >> 1 & 1) != 0)))))) || (bVar1)) {
    st_gen = 2;
  }
  else if ((B_gfhtak == 0) || ((DAT_001c9ced >> 6 & 1) == 0)) {
    st_gen = 0;
  }
  else {
    st_gen = 1;
  }
  return;
}

