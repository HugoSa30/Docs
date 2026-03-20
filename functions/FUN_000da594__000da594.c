/*
 * Program: n42.bin
 * Function: FUN_000da594
 * Entry: 000da594
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000da594(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  if (DAT_003fc18c != '\0') {
    DAT_003fb170 = 0;
    do {
      (&UNK_003fd704)[DAT_003fb170] = 0;
      DAT_003fb170 = DAT_003fb170 + 1;
    } while (DAT_003fb170 < 0xa8);
    DAT_003fc18c = '\0';
  }
  bVar5 = stkrnx;
  bVar4 = DAT_005b9132;
  cVar3 = DAT_003fc085;
  uVar6 = (uint)rl;
  if ((S_ZNDRLP & 3) == 0) {
    uVar9 = uVar6;
    if (B_zwdyn != 0) {
      if (E_vvt_zw == '\0') {
        uVar9 = (uint)rlsolkrvf;
      }
      else {
        uVar9 = (uint)rlsolkrvft;
      }
    }
  }
  else {
    uVar9 = (uint)rlp;
  }
  uVar7 = (uint)DAT_005b89aa;
  if (uVar7 < uVar9) {
    DAT_003fb18d = '\x01';
  }
  else if (DAT_001d16d9 < uVar7) {
    if (uVar9 < (uVar7 - DAT_001d16d9 & 0xff)) {
      DAT_003fb18d = '\0';
    }
  }
  else if (uVar9 == 0) {
    DAT_003fb18d = '\0';
  }
  if ((CWZWDYN & 0x10) == 0) {
    if ((B_krldy == '\0') && (DAT_003fb18d == '\0')) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
      if (DAT_003fb18c == '\0') {
        DAT_003fc08b = 1;
        DAT_003fb18c = '\x01';
        goto LAB_000da72c;
      }
    }
    DAT_003fc08b = 0;
    DAT_003fb18c = cVar8;
  }
LAB_000da72c:
  uVar7 = (uint)nmot;
  if ((((B_krldy == '\0') && (DAT_003fb18d == '\0')) || (B_stend == '\0')) ||
     ((B_tmkr == '\0' || (uVar7 <= DAT_001c816d)))) {
    B_kr = 0;
    bVar2 = false;
  }
  else {
    B_kr = 1;
    bVar2 = true;
  }
  DAT_003fb168 = DAT_003fc085;
  if ((uVar6 < DAT_001c8160) &&
     ((DAT_003fc089 != '\x01' || ((int)uVar6 < (int)((uint)DAT_001c8160 - (uint)DAT_001d16d9))))) {
    DAT_003fc089 = 0;
    bVar1 = false;
  }
  else {
    DAT_003fc089 = 1;
    bVar1 = true;
  }
  if ((B_ll == '\0') || (bVar1)) {
    DAT_003fb16c = 1;
    bVar1 = true;
  }
  else {
    DAT_003fb16c = 0;
    bVar1 = false;
  }
  if (((bVar2) && (DAT_001d1952 < tmot)) && (bVar1)) {
    DAT_003fc085 = 1;
    bVar2 = true;
  }
  else {
    DAT_003fc085 = 0;
    bVar2 = false;
  }
  DAT_003fb16e = stkrnx;
  if ((uVar7 < DAT_001d16dd) &&
     ((stkrnx != 4 || ((int)uVar7 < (int)((uint)DAT_001d16dd - (uint)KRANH))))) {
    if ((uVar7 < DAT_001d16dc) &&
       ((stkrnx != 3 || ((int)uVar7 < (int)((uint)DAT_001d16dc - (uint)KRANH))))) {
      if ((uVar7 < DAT_001d16db) &&
         ((stkrnx != 2 || ((int)uVar7 < (int)((uint)DAT_001d16db - (uint)KRANH))))) {
        if ((uVar7 < DAT_001d16da) &&
           ((stkrnx != 1 || ((int)uVar7 < (int)((uint)DAT_001d16da - (uint)KRANH))))) {
          stkrnx = 0;
        }
        else {
          stkrnx = 1;
        }
      }
      else {
        stkrnx = 2;
      }
    }
    else {
      stkrnx = 3;
    }
  }
  else {
    stkrnx = 4;
  }
  DAT_003fb16f = DAT_005b9132;
  if (B_vl == 0) {
    if ((uVar9 < DAT_005b89a9) &&
       ((DAT_005b9132 != 2 || ((int)uVar9 < (int)((uint)DAT_005b89a9 - (uint)DAT_001d16d9))))) {
      if ((uVar9 < DAT_005b89a8) &&
         ((DAT_005b9132 != 1 || ((int)uVar9 < (int)((uint)DAT_005b89a8 - (uint)DAT_001d16d9))))) {
        DAT_005b9132 = 0;
      }
      else {
        DAT_005b9132 = 1;
      }
    }
    else {
      DAT_005b9132 = 2;
    }
  }
  else {
    DAT_005b9132 = 3;
  }
  if ((((CWZWDYN & 0x10) != 0) && (bVar2)) &&
     (((cVar3 == '\0' ||
       ((bVar4 != DAT_005b9132 &&
        ((((B_krldy != '\0' || (B_krndy != '\0')) || (DAT_001c8169 == '\0')) ||
         (DAT_001c816e < DAT_005b9132)))))) ||
      ((bVar5 != stkrnx &&
       (((B_krldy != '\0' || (B_krndy != '\0')) ||
        ((DAT_001c816a == '\0' || (DAT_001c816f < stkrnx)))))))))) {
    DAT_003fc08b = 1;
  }
  return;
}

