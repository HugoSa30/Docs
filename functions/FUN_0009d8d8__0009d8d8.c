/*
 * Program: n42.bin
 * Function: FUN_0009d8d8
 * Entry: 0009d8d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_0009d8d8(uint param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  short sVar5;
  byte local_1e;
  
  uVar1 = *(ushort *)(param_1 * 4 + 0xec00);
  uVar2 = *(ushort *)(param_1 * 4 + 0xec02);
  if (param_3 != 0) {
    bVar4 = false;
    while( true ) {
      uVar3 = *(ushort *)(param_3 + 2);
      if ((uint)*(ushort *)(param_3 + 4) ==
          (param_1 + ~((uint)uVar3 + (uint)*(ushort *)(param_3 + 6)) & 0xffff)) {
        if (((uVar3 & 0xff) != (uVar2 & 0xff)) || ((uint)(uVar3 >> 8) << 5 != (uint)uVar1)) {
          return 0;
        }
        sVar5 = FUN_0009d6e4(param_1 & 0xffff,param_3 + 8);
        if (sVar5 == *(short *)(param_3 + 6)) {
          return param_3;
        }
        (&UNK_003fa134)[param_1] = (&UNK_003fa134)[param_1] | 0x10;
      }
      local_1e = (byte)(uVar2 >> 8);
      if (((uVar2 & 0x8000) != 0) && ((local_1e & 0x40) < 0x40)) {
        return 0;
      }
      if ((uVar2 & 0x2000) != 0) {
        return 0;
      }
      if (bVar4) {
        return 0;
      }
      param_3 = FUN_0009ce30(param_1,param_2,param_3);
      if (param_3 == 0) break;
      bVar4 = true;
    }
  }
  return 0;
}

