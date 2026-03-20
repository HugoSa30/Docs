/*
 * Program: n42.bin
 * Function: FUN_001160e4
 * Entry: 001160e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001160e4(void)

{
  ushort uVar1;
  uint uVar2;
  
  if ((raster_um & 3) == 3) {
    uVar2 = (uint)aktqu_uc;
    rl_uc = (&DAT_001c0aa0)[uVar2];
    nmot_uc = (&DAT_001c0a78)[uVar2];
    zwout_uc = (&DAT_001c0ab0)[uVar2];
    rlst08_uc = FUN_00110958(&DAT_001c0a94,rl_uc);
    nmst08_uc = FUN_00110958(&DAT_001c0a88,nmot_uc);
    DAT_003f98af = FUN_00110b18(&DAT_001c09e4,DAT_001c0a88,rlst08_uc);
    miopt_uc = DAT_003f98af;
    DAT_003f98ae = FUN_00110c30(&DAT_001c0a24,DAT_001c0a88,rlst08_uc,nmst08_uc);
    DAT_003f98b1 = DAT_003f98ae - zwout_uc;
    if ((char)DAT_003f98b1 < '\0') {
      DAT_003f98b1 = 0;
    }
    dzw_uc = DAT_003f98b1;
    zwopt_uc = DAT_003f98ae;
    DAT_003f98b0 = FUN_00110aa8(&DAT_001c0a64,DAT_003f98b1);
    uVar2 = ((uint)DAT_003f98af * (uint)DAT_003f98b0) / 200;
    uVar1 = (ushort)uVar2;
    DAT_003f98b3 = (byte)uVar2;
    mi_uc = DAT_003f98b3;
    abmist_uc = (uVar1 & 0xff) + (ushort)dzw_uc * 0x100;
    _DAT_003f98b2 = uVar1;
    etazw_uc = DAT_003f98b0;
  }
  return;
}

