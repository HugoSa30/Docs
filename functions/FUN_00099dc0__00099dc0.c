/*
 * Program: n42.bin
 * Function: FUN_00099dc0
 * Entry: 00099dc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00099dc0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  iVar1 = param_2 * 0x10;
  if (*(char *)(iVar1 + 0x16868) == '\x01') {
    param_2 = (*(ushort *)(param_1 + 0x12) & 0x3f00) >> 8;
  }
  else if (*(char *)(iVar1 + 0x16868) == '\x02') {
    param_2 = (*(ushort *)(param_1 + 0x12) & 0x3f) - (*(ushort *)(param_1 + 0xe) & 0x3f);
  }
  if (*(short *)(iVar1 + 0x16862) == 0x1800) {
    uVar2 = (uint)(*(byte *)(iVar1 + 0x1686b) >> 4);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = iVar3 + (uint)*(byte *)(uVar4 + 0x16ab4);
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar2);
    }
    uVar4 = (uint)*(byte *)(uVar2 + 0x16ab4);
    uVar2 = param_2 & 0xff;
    param_2 = FUN_000b17b0(uVar2,uVar4);
    if ((int)(uVar2 - (uVar2 / uVar4) * uVar4) <
        (int)((uint)*(byte *)(iVar1 + 0x1686b) & 0xfU - iVar3)) {
      if ((param_2 & 0xff) == 0) {
        param_2 = *(byte *)(iVar1 + 0x1686a) + 0xff;
      }
      else {
        param_2 = param_2 + 0xff;
      }
    }
  }
  return param_2 & 0xff;
}

