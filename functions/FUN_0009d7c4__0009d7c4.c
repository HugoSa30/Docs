/*
 * Program: n42.bin
 * Function: FUN_0009d7c4
 * Entry: 0009d7c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009d7c4(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uint)*(ushort *)(param_2 + 4) ==
      (param_1 + ~((uint)uVar1 + (uint)*(ushort *)(param_2 + 6)) & 0xffff)) {
    if (((uVar1 & 0xff) == (ushort)*(byte *)(param_1 * 4 + 0xec03)) &&
       ((uint)(uVar1 >> 8) << 5 == (uint)*(ushort *)(param_1 * 4 + 0xec00))) {
      sVar3 = FUN_0009d6e4(param_1 & 0xffff,param_2 + 8);
      if (sVar3 == *(short *)(param_2 + 6)) {
        cVar4 = FUN_0009d504(param_1,param_2 + 8,param_3);
        if (cVar4 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

