/*
 * Program: n42.bin
 * Function: FUN_001219e8
 * Entry: 001219e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001219e8(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(short *)((int)param_2 + 6) == 0) {
    uVar2 = 0;
    uVar1 = 0;
    do {
      uVar3 = 0;
      if (*(char *)(uVar1 * 8 + 0x1cbc8) != '\0') {
        do {
          *(undefined *)(*param_2 + (uVar2 & 0xff)) =
               *(undefined *)(*(int *)(uVar1 * 8 + 0x1cbcc) + uVar3);
          uVar2 = uVar2 + 2;
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < *(byte *)(uVar1 * 8 + 0x1cbc8));
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 6);
    *(ushort *)(param_2 + 2) = (ushort)uVar2 & 0xff;
    *(undefined *)((int)param_2 + 10) = 1;
  }
  else {
    *(undefined *)*param_2 = 0x10;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

