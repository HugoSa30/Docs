/*
 * Program: n42.bin
 * Function: FUN_001e3d94
 * Entry: 001e3d94
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001e3d94(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  FUN_001e2e0c();
  iVar3 = param_1 + (uint)*(byte *)(param_1 + 1);
  pbVar2 = (byte *)(iVar3 + 0x16);
  if ((((DAT_003fb8b4 == '\0') && (*(char *)(param_1 + 2) == '\x03')) && (*pbVar2 - 1 < 2)) &&
     ((*(byte *)(iVar3 + 0x17) < 0x3c &&
      ((uint)*(byte *)(iVar3 + 0x17) + (uint)*(byte *)(iVar3 + 0x18) < 0x3d)))) {
    *(byte *)(param_2 + 2) = *(char *)(param_2 + 1) + *(byte *)(iVar3 + 0x18);
    *pbVar2 = *pbVar2 - 1;
    *(undefined *)(param_1 + 1) = *(undefined *)(iVar3 + 0x17);
    cVar1 = *(char *)(iVar3 + 0x18);
    *(char *)(param_1 + 2) = cVar1;
    while (cVar1 != '\0') {
      *(undefined *)(param_2 + (uint)*(byte *)(param_2 + 1) + 0x16) =
           (&DAT_003fbbd4)[(uint)*(byte *)(param_1 + 1) + (uint)*pbVar2 * 0x3c];
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + -1;
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
      *(char *)(param_2 + 1) = *(char *)(param_2 + 1) + '\x01';
      cVar1 = *(char *)(param_1 + 2);
    }
    uVar4 = 1;
  }
  FUN_001e2e0c();
  return uVar4;
}

