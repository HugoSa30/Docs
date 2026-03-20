/*
 * Program: n42.bin
 * Function: FUN_0019b8a8
 * Entry: 0019b8a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019b8a8(void)

{
  undefined2 uVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  
  if ((DAT_001d2872 & 1) == 0) {
    B_lamka = B_lamka & ~(B_lrka|B_lamka|B_lrka2|B_lamka2);
  }
  else {
    if ((nmot < DAT_001d2874) && ((DAT_005b86e5 & 1) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((B_sbbvk == '\0') || (!bVar2)) {
      DAT_005b8b6d = DAT_005b8b6d & 0xfe;
    }
    else {
      DAT_005b8b6d = DAT_005b8b6d | 1;
    }
    if ((B_bevab == '\0') && (((DAT_001d2872 >> 3 & 1) != 0 || (lamsons_w < 0x1001)))) {
      DAT_005b8b6d = DAT_005b8b6d & 0xfd;
    }
    else {
      DAT_005b8b6d = DAT_005b8b6d | 2;
    }
    DAT_005b82bb = DAT_001d2873;
    DAT_005b82b2 = _DAT_001d2868;
    DAT_005b82aa = _DAT_001d2870;
    DAT_005b82b4 = _DAT_001d286e;
    DAT_005b82ac = _DAT_001d2864;
    DAT_005b82c0 = DAT_001d2875;
    if (B_bevab != '\0') {
      DAT_005b82c0 = DAT_001d2876;
    }
    DAT_005b82b8 = '\x01' - ((DAT_005b8b6d & 1) == 0);
    DAT_005b82bf = (DAT_005b8b6d & 2) != 0;
    DAT_005b82a2 = DAT_005b9b44;
    DAT_005b82bd = DAT_005b8d32;
    DAT_005b82a4 = DAT_005b8b5a;
    DAT_005b82b6 = _ml_w;
    DAT_005b82ae = lamsoni_w;
    func_0xff2250c0(&DAT_005b82a0);
    if (DAT_005b82be == '\0') {
      DAT_005b8b6d = DAT_005b8b6d & 0xfb;
    }
    else {
      DAT_005b8b6d = DAT_005b8b6d | 4;
    }
    DAT_005b8b62 = DAT_005b82a0;
    DAT_005b8b5c = DAT_005b82a0 >> 4;
    DAT_005b8b6e = DAT_005b82b9;
    DAT_005b8b60 = DAT_005b82a6;
    DAT_005b8b6b = DAT_005b82ba;
    if (((B_lamka & B_lrka) != 0) || ((DAT_005b8b6d & 4) != 0)) {
      if ((DAT_005b8b6d & 4) == 0) {
        uVar4 = 0xffffc000;
      }
      else {
        uVar4 = 0x4000;
      }
      uVar1 = _DAT_001d286c;
      if ((DAT_005b8b6d & 4) != 0) {
        uVar1 = _DAT_001d286a;
      }
      func_0xff2222f0(&DAT_005b829c,uVar4,uVar1,0,0x4000);
      if ((short)((uint)DAT_005b829c >> 0x10) < 1) {
        B_lamka = B_lamka & ~B_lrka;
      }
      else {
        B_lamka = B_lamka | B_lrka;
      }
      if ((B_lamka & B_lrka) == 0) {
        lamka_w = _DAT_001d2866;
      }
      else {
        sVar3 = func_0xff2189bc(&DAT_001d2846,_ml_w);
        DAT_005b8b58 = sVar3 + -0x1000;
        lamka_w = (short)((int)DAT_005b8b58 * (int)(short)((uint)DAT_005b829c >> 0x10) >> 0xe) +
                  0x1000;
      }
    }
    if ((B_lamka & B_lrka) == 0) {
      B_lamka = B_lamka & ~B_lamka;
    }
    else {
      B_lamka = B_lamka | B_lamka;
    }
    lamka2_w = lamka_w;
    if ((B_lamka & B_lrka) == 0) {
      B_lamka = B_lamka & ~B_lrka2;
    }
    else {
      B_lamka = B_lamka | B_lrka2;
    }
    if ((B_lamka & B_lrka) == 0) {
      B_lamka = B_lamka & ~B_lamka2;
    }
    else {
      B_lamka = B_lamka | B_lamka2;
    }
  }
  return;
}

