/*
 * Program: n42.bin
 * Function: FUN_000bf848
 * Entry: 000bf848
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000bf848(void)

{
  ushort uVar1;
  
  if (B_dkuevab == '\0') {
    redsolr = redsol;
  }
  else {
    redsolr = 4;
  }
  dmdevab = flgtiab | (byte)flgstinj_w;
  uVar1 = (ushort)flgtiab | flgstinj_w & 0xff;
  if (stateaevab < 3) {
    if (stateaevab == 2) {
      if (((devoff == 0) || (B_faevz == '\0')) && ((uVar1 == 0 && ((fevab == 0 && (anzeab == 0))))))
      {
        stateaevab = 3;
        B_dmdstop = 1;
        B_nlphea = 0;
        anzeab = 0;
        abmf = 0;
      }
      else if (redsolr == 0) {
        stateaevab = 5;
      }
    }
    else if (stateaevab == 0) {
      if (redsolr == 0) {
        if ((((devoff == 0) || (B_faevz == '\0')) && (uVar1 == 0)) && (fevab == 0)) {
          B_fophsnl = 0;
          if ((B_nlpheai == '\0') && (B_phsnl != '\0')) {
            B_frdph = true;
          }
          else {
            B_frdph = false;
          }
          if ((bool)B_frdph) {
            stateaevab = 5;
          }
        }
        else {
          B_fophsnl = 1;
          if ((B_nlpheai == '\0') && (B_phsnl != '\0')) {
            B_frdph = '\x01';
          }
          else {
            B_frdph = '\0';
          }
          stateaevab = 5;
        }
      }
      else {
        stateaevab = 3;
        evrbgn_one = zzyl + 2;
        if (3 < evrbgn_one) {
          evrbgn_one = zzyl - 2;
        }
        B_dmdstop = 1;
        abmf = 0;
        B_nlphea = 0;
        anzeab = 0;
      }
    }
    else if (stateaevab == 1) {
      if (redsolr == 0) {
        if ((((devoff == 0) || (B_faevz == '\0')) && (uVar1 == 0)) &&
           ((fevab == 0 && (anzeab == 0)))) {
          stateaevab = 4;
          tvrnr = 0;
          evz_aus = 0;
          abmf = 0;
        }
      }
      else {
        stateaevab = 2;
        evrbgn_one = zzyl + 2;
        if (3 < evrbgn_one) {
          evrbgn_one = zzyl - 2;
        }
        anzeab = 0;
        B_dmdstop = 1;
        B_nlphea = 0;
      }
    }
  }
  else if (stateaevab == 3) {
    if ((((devoff == 0) || (B_faevz == '\0')) && (uVar1 == 0)) && (fevab == 0)) {
      if (redsolr == 0) {
        stateaevab = 4;
        evz_aus = 0;
        abmf = 0;
        tvrnr = 0;
      }
    }
    else {
      stateaevab = 2;
      B_dmdstop = 1;
      B_nlphea = 0;
      anzeab = 0;
    }
  }
  else if (stateaevab == 4) {
    if (redsolr == 0) {
      if (uVar1 == 0) {
        if (7 < tvrnr) {
          stateaevab = 0;
          B_dmdstop = 0;
        }
      }
      else {
        stateaevab = 5;
      }
    }
    else {
      stateaevab = 3;
      evrbgn_one = zzyl + 2;
      if (3 < evrbgn_one) {
        evrbgn_one = zzyl - 2;
      }
      B_dmdstop = 1;
      B_nlphea = 0;
      abmf = 0;
      anzeab = 0;
    }
  }
  if (stateaevab < 4) {
    if (stateaevab == 3) {
      evz_aus = *(byte *)((uint)evrbgn_one * 4 + 0x1c59f0 + (uint)(byte)(redsolr - 1)) & 0xf;
      redsol_one = redsolr - 1;
      return;
    }
    if (stateaevab == 0) {
      if (B_phsnl != '\0') {
        return;
      }
      B_nlphea = 0;
      B_nlpheai = 0;
      return;
    }
    if (stateaevab == 1) {
      B_dmdstop = 0;
      uVar1 = fevab | uVar1;
      if ((devoff != 0) && (B_faevz != '\0')) {
        uVar1 = uVar1 | devoff;
        B_dmdstop = 1;
      }
      if ((uVar1 & 0xf) != 0) {
        abmf = (byte)(uVar1 & 0xf);
        B_nlphea = 0;
        anzeab = 0;
        evz_aus = abmf;
        return;
      }
      if (B_phsnl == '\0') {
        B_nlphea = 0;
        B_nlpheai = 0;
        anzeab = 0;
        return;
      }
      if (anzeab == 0) {
        abmf = zyleausb;
        evz_aus = zyleausb;
        return;
      }
      abmf = zyleausb;
      anzeab = anzeab - 1;
      evz_aus = zyleausb;
      return;
    }
    if (stateaevab == 2) {
      abmf = fevab | (byte)uVar1;
      if ((devoff != 0) && (B_faevz != '\0')) {
        abmf = abmf | devoff;
        B_dmdstop = 1;
      }
      abmf = abmf & 0xf;
      redsol_one = redsolr - 1;
      if (redsolr == 0) {
        evz_aus = abmf;
        return;
      }
      evz_aus = *(byte *)((uint)evrbgn_one * 4 + 0x1c59f0 + (uint)redsol_one) & 0xf | abmf;
      return;
    }
  }
  else {
    if (stateaevab == 4) {
      tvrnr = tvrnr + 1;
      return;
    }
    if (stateaevab == 5) {
      B_dmdstop = 0;
      if ((B_frdph == '\0') || (B_nlpheai != '\0')) {
        B_nlpheai = 0;
        B_nlphea = 0;
        anzeab = 0;
        abmf = fevab | (byte)uVar1;
        if ((devoff != 0) && (B_faevz != '\0')) {
          abmf = abmf | devoff;
          B_dmdstop = 1;
        }
      }
      else {
        B_nlpheai = 1;
        B_nlphea = 1;
        B_frdph = '\0';
        anzeab = anzeausb << 2;
        abmf = zyleausb;
      }
      abmf = abmf & 0xf;
      evz_aus = abmf;
      stateaevab = 1;
      return;
    }
  }
  stateaevab = 0;
  evz_aus = 0;
  abmf = 0;
  B_dmdstop = 0;
  return;
}

