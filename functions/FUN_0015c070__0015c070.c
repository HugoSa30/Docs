/*
 * Program: n42.bin
 * Function: FUN_0015c070
 * Entry: 0015c070
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0015c070(void)

{
  word wVar1;
  word wVar2;
  word wVar3;
  word wVar4;
  word wVar5;
  word wVar6;
  uint uVar7;
  
  B_zagstp = (DAT_001c1b1e & 1) == 0;
  if ((bool)B_zagstp) {
    flgstign_w = 0;
    flgstinj_w = 0;
  }
  else {
    if (((DAT_001c1b1f & 1) == 0) || (DAT_003faa41 != 0)) {
      DAT_003faa40 = false;
    }
    else {
      DAT_003faa40 = true;
    }
    DAT_003faa41 = DAT_001c1b1f & 1;
    if ((bool)DAT_003faa40) {
      DAT_005b863a = DAT_005b863a | 2;
    }
    if (((DAT_001c1b1f & 1) == 0) && (DAT_003faa43 != 0)) {
      DAT_003faa42 = true;
    }
    else {
      DAT_003faa42 = false;
    }
    DAT_003faa43 = DAT_001c1b1f & 1;
    if ((bool)DAT_003faa42) {
      DAT_005b863a = DAT_005b863a & 0xfd | 1;
    }
    else {
      DAT_005b863a = DAT_005b863a & 0xfe;
    }
    DAT_005b863b = 0;
    do {
      DAT_005b8638 = func_0xff21984c(&DAT_001c1a9c,DAT_005b863b,DAT_005b863c);
      wVar1 = ignitioz_w;
      wVar2 = lastmodz_w;
      wVar3 = misfirez_w;
      wVar4 = DAT_005b9794;
      wVar5 = nwnumbz_w;
      wVar6 = pausez_w;
      if (DAT_005b863b < 4) {
        wVar5 = DAT_005b8638;
        if ((((DAT_005b863b != 3) && (wVar4 = DAT_005b8638, wVar5 = nwnumbz_w, DAT_005b863b != 0))
            && (wVar1 = DAT_005b8638, wVar4 = DAT_005b9794, DAT_005b863b != 1)) &&
           (wVar1 = ignitioz_w, wVar3 = DAT_005b8638, DAT_005b863b != 2)) {
          wVar3 = misfirez_w;
        }
      }
      else {
        wVar6 = DAT_005b8638;
        if ((DAT_005b863b != 4) && (wVar2 = DAT_005b8638, wVar6 = pausez_w, DAT_005b863b != 5)) {
          wVar2 = lastmodz_w;
        }
      }
      pausez_w = wVar6;
      nwnumbz_w = wVar5;
      DAT_005b9794 = wVar4;
      misfirez_w = wVar3;
      lastmodz_w = wVar2;
      ignitioz_w = wVar1;
      uVar7 = DAT_005b863b + 1;
      if (0xff < uVar7) {
        uVar7 = 0xff;
      }
      DAT_005b863b = (byte)uVar7;
    } while ((uVar7 & 0xff) < 6);
    FUN_0015bd5c(&UNK_003faa44);
    DAT_005b863c = DAT_003faa50;
  }
  return;
}

