/*
 * Program: n42.bin
 * Function: FUN_000f0044
 * Entry: 000f0044
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f0044(void)

{
  int iVar1;
  uint uVar2;
  
  if ((B_clddss & 1) == 0) {
    DAT_005b96aa = dps_w + 0x8000;
  }
  else if ((uint)_ps_w < (uint)pu_w) {
    uVar2 = ((uint)pu_w - (uint)_ps_w) + 0x8000;
    if (uVar2 < 0xffff) {
      DAT_005b96aa = (short)uVar2;
    }
    else {
      DAT_005b96aa = -1;
    }
  }
  if (tevper == 0) {
    DAT_005b91ed = 0xff;
  }
  else {
    uVar2 = 0x28000 / tevper >> 6;
    if (uVar2 < 0x100) {
      DAT_005b91ed = (byte)uVar2;
    }
    else {
      DAT_005b91ed = 0xff;
    }
  }
  if ((DAT_001d2ed2 & 8) == 0) {
    uVar2 = (uint)DAT_005b91ed;
    DAT_005b96ba = DAT_005b96a6;
  }
  else {
    uVar2 = 10;
    DAT_005b96ba = (undefined2)(((uint)tateist * 0xfa000) / 4000);
  }
  DAT_005b96b0 = calc_value_from_x_y(&DAT_001d291a,DAT_005b96aa,_ml_w);
  DAT_005b96ae = calc_value_from_y(0x1cb63e,DAT_005b96ba);
  iVar1 = uVar2 * DAT_005b96ae * 200;
  if ((uint)(iVar1 >> 8) < 0x10000) {
    DAT_005b96ac = (ushort)((uint)iVar1 >> 8);
  }
  else {
    DAT_005b96ac = 0xffff;
  }
  uVar2 = ((uint)ftvdkho_w * (uint)DAT_005b96ac * 4 >> 0x10) * (uint)DAT_005b96b0 >> 0xf;
  if (uVar2 < 0x10000) {
    DAT_005b96b2 = (undefined2)uVar2;
  }
  else {
    DAT_005b96b2 = 0xffff;
  }
  DAT_005b91ec = (undefined)((ushort)DAT_005b96b2 >> 8);
  if (DAT_003fc1dd == '\0') {
    DAT_005b96b6 = DAT_005b96b2;
    mste = DAT_005b91ec;
  }
  else {
    DAT_005b96b6 = 0;
    mste = 0;
  }
  if (DAT_001cb63c == 0) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = ((uint)DAT_005b96b0 * (uint)DAT_005b96ac) / ((uint)DAT_001cb63c << 9);
    if (0xffff < uVar2) {
      DAT_005b96bc = 0xffff;
      goto LAB_000f02e8;
    }
  }
  DAT_005b96bc = (undefined2)uVar2;
LAB_000f02e8:
  DAT_005b8b8c = calc_value_from_x_y(&DAT_001d291a,DAT_005b96aa,_ml_w);
  uVar2 = (uint)DAT_005b8b8c * (uint)ftvdkho_w * 4 >> 0xf;
  if (uVar2 < 0x10000) {
    DAT_005b96b4 = (undefined2)uVar2;
  }
  else {
    DAT_005b96b4 = 0xffff;
  }
  return;
}

