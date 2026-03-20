/*
 * Program: n42.bin
 * Function: FUN_000a2cc8
 * Entry: 000a2cc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a2cc8(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined auStack_18 [2];
  ushort local_16 [5];
  
  uVar2 = 1;
  if (DAT_003fa1e6 == '\x01') {
    uVar1 = (uint)DAT_003fa1e1 & ~(param_2 & 0xff) | param_2 & 0xff & param_3 & 0xff;
    if (uVar1 != DAT_003fa1e1) {
      local_16[0] = (ushort)uVar1 | 0x1200;
      FUN_000a3c90(_DAT_00016ed6,1,0,local_16,auStack_18);
      FUN_000a3858(_DAT_00016ed6,auStack_18);
    }
    uVar2 = 0;
  }
  if ((DAT_003fa1e7 == '\x01') && (param_2 = param_2 & 0xff00, param_2 != 0)) {
    uVar1 = (uint)DAT_003fa1e2 & ~(param_2 >> 8);
    param_2 = param_2 & param_3 & 0xff00;
    if ((uVar1 | param_2 >> 8) != (uint)DAT_003fa1e2) {
      local_16[0] = 0x3a00;
      FUN_000a3c90(_DAT_00016ee0,1,0,local_16,auStack_18);
      FUN_000a3858(_DAT_00016ee0,auStack_18);
      local_16[0] = (ushort)uVar1 | (ushort)(param_2 >> 8) | 0x1500;
      FUN_000a3c90(_DAT_00016ed8,1,0,local_16,auStack_18);
      FUN_000a3858(_DAT_00016ed8,auStack_18);
      FUN_000a3858(_DAT_00016ee2,auStack_18);
    }
    uVar2 = 0;
  }
  return uVar2;
}

