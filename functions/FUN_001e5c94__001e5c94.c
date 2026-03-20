/*
 * Program: n42.bin
 * Function: FUN_001e5c94
 * Entry: 001e5c94
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001e5c94(int param_1,byte *param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined2 local_40;
  byte local_3e;
  undefined2 local_3d;
  byte local_3b;
  undefined2 local_3a;
  byte local_38;
  undefined2 local_37;
  byte local_35;
  undefined2 local_34;
  byte local_32;
  undefined2 local_31;
  byte local_2f;
  undefined2 local_2e;
  byte local_2c;
  undefined2 local_2b;
  byte local_29;
  undefined auStack_28 [6];
  undefined2 local_22;
  undefined2 local_1a;
  
  if (param_1 < (int)(uint)DAT_00fe16e2) {
    param_1 = param_1 * 0xf;
    if ((*(byte *)(param_1 + 0xfe16e4) & 0x80) == 0x80) {
      local_40 = *(undefined2 *)(param_1 + 0xfe16eb);
      local_34 = *(undefined2 *)(param_1 + 0xfe16f1);
      local_2b = 0;
      local_31 = 0;
      local_37 = 0;
      local_3d = 0;
      local_3b = *(byte *)(param_1 + 0xfe16e5) & 0xf;
      local_3e = local_3b | 0x80;
      local_3b = local_3b | 0x20;
      local_1a = 0xffff;
      local_22 = 0xffff;
      local_3a = local_40;
      local_38 = local_3e;
      local_35 = local_3b;
      local_32 = local_3e;
      local_2f = local_3b;
      local_2e = local_34;
      local_2c = local_3e;
      local_29 = local_3b;
      FUN_001e7524(param_1 + 0xfe16e6);
      FUN_001e75cc(&local_40,8,auStack_28,1);
      *param_2 = (byte)local_22;
      *param_3 = (char)local_1a;
      if (((ushort)*param_2 & *(ushort *)(param_1 + 0xfe16ed)) != *(ushort *)(param_1 + 0xfe16ef)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

