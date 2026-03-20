/*
 * Program: n42.bin
 * Function: FUN_0013ca88
 * Entry: 0013ca88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013ca88(undefined4 param_1,byte param_2)

{
  undefined4 uVar1;
  byte bVar2;
  
  while (uVar1 = _DAT_0001bdc4, param_2 = param_2 + 1, param_2 < 5) {
    if (param_2 == 1) {
      bVar2 = 0;
      do {
        *(undefined4 *)(&UNK_003fda84 + (uint)bVar2 * 4) = uVar1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 4);
    }
    else if (param_2 == 2) {
      bVar2 = 0;
      do {
        *(undefined4 *)(&UNK_003fdab4 + (uint)bVar2 * 4) = uVar1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 4);
    }
    else if (param_2 == 3) {
      bVar2 = 0;
      do {
        *(undefined4 *)(&UNK_003fdae4 + (uint)bVar2 * 4) = uVar1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 4);
    }
    else if (param_2 == 4) {
      bVar2 = 0;
      do {
        *(undefined4 *)(&UNK_003fdb14 + (uint)bVar2 * 4) = uVar1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 4);
    }
  }
  FUN_0013caf8(param_1,1);
  return;
}

