/*
 * Program: n42.bin
 * Function: FUN_000c2514
 * Entry: 000c2514
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2514(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (B_stend == '\0') {
    krkte_w = calc_value_from_y(&KLKRKTE,rk_w);
    frkte_w = (word)((uint)krkte_w * ((short)frlfsdp_w + 0x8000) >> 0xe);
  }
  uVar1 = (uint)frkte_w;
  tevfa_l = (rk_w * uVar1 >> 5) * 0x177 >> 10;
  uVar5 = 450000;
  if (450000 < tevfa_l) {
    tevfa_l = uVar5;
  }
  uVar4 = tevfa_l * ftek_w >> 0xc;
  uVar2 = _TEMIN;
  if (_TEMIN < uVar4) {
    uVar2 = uVar4;
  }
  if (450000 < uVar2) {
    uVar2 = uVar5;
  }
  te_w = (word)(uVar2 >> 3);
  B_temin = _TEMIN == uVar2;
  tevfa2_l = (rk2_w * uVar1 >> 5) * 0x177 >> 10;
  if (450000 < tevfa2_l) {
    tevfa2_l = uVar5;
  }
  uVar4 = tevfa2_l * ftek2_w >> 0xc;
  uVar3 = _TEMIN;
  if (_TEMIN < uVar4) {
    uVar3 = uVar4;
  }
  if (450000 < uVar3) {
    uVar3 = uVar5;
  }
  te2_w = (word)(uVar3 >> 3);
  B_temin2 = _TEMIN == uVar3;
  uVar4 = 0;
  uVar6 = (uint)evz_austot;
  te2_l = uVar3;
  te_l = uVar2;
  do {
    if (((int)uVar6 >> (uVar4 & 0x3f) & 1U) == 0) {
      uVar7 = uVar2;
      if ((0xaa >> (uVar4 & 0x3f) & 1U) != 0) {
        uVar7 = uVar3;
      }
      uVar7 = uVar7 * (byte)(&DAT_005b8e2c)[uVar4] * 8 +
              (uVar1 * *(ushort *)(&UNK_003fb6c6 + uVar4 * 2) >> 5) * 0x177;
    }
    else {
      uVar7 = 0;
    }
    uVar7 = uVar7 >> 10;
    if (450000 < uVar7) {
      uVar7 = uVar5;
    }
    (&DAT_005b9d90)[uVar4] = uVar7;
    uVar7 = uVar4 + 1;
    if (8 < (uVar7 & 0xff)) {
      uVar7 = 8;
    }
    uVar4 = uVar7 & 0xff;
  } while (uVar4 < 4);
  i_zyl = (byte)uVar7;
  return;
}

