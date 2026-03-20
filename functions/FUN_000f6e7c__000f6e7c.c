/*
 * Program: n42.bin
 * Function: FUN_000f6e7c
 * Entry: 000f6e7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f6e7c(int param_1,byte param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 100) = 4;
    if (*(code **)(_DAT_003fc3e0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc3e0 + 4))(4,1,0,0);
    }
    iVar3 = (uint)param_2 * 0xc;
    uVar1 = (uint)*(byte *)(_DAT_003fc5a8 + iVar3 + 8) * 2;
    *(uint *)(*(int *)(_DAT_003fc5a8 + iVar3) + 0x14) =
         *(uint *)(*(int *)(_DAT_003fc5a8 + iVar3) + 0x14) & ~(3 << (uVar1 & 0x3f)) |
         ((byte)(&UNK_003fc452)[(uint)param_2 * 0x70] & 3) << (uVar1 & 0x3f);
    *(int *)(*(int *)(_DAT_003fc5a8 + iVar3) + 0x18) =
         2 << ((uint)*(byte *)(_DAT_003fc5a8 + iVar3 + 8) * 2 & 0x3f);
    *(undefined4 *)(param_1 + 0x34) = 0x672b8;
  }
  else if (iVar3 == 4) {
    *(undefined4 *)(param_1 + 100) = 5;
    if (*(code **)(_DAT_003fc3e0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc3e0 + 4))(4,2,param_2,0);
    }
  }
  else if (iVar3 == 5) {
    cVar2 = (*(code *)&SUB_00fadb88)();
    if (cVar2 == '\x01') {
      *(ushort *)(param_1 + 0x48) =
           *(ushort *)(*(int *)(_DAT_003fc5a8 + (uint)param_2 * 0xc + 4) + 8) >> 8;
      *(undefined4 *)(param_1 + 0x30) = 0x670a8;
      *(undefined4 *)(param_1 + 100) = 6;
    }
  }
  else if (iVar3 == 6) {
    *(undefined4 *)(param_1 + 0x2c) = 0x672b0;
    if (*(char *)(param_1 + 0x6c) == '\x01') {
      (&UNK_003fc448)[(uint)param_2 * 0x70] = 0;
      (*(code *)&SUB_00fb2c10)();
      (&UNK_003fc453)[(uint)param_2 * 0x70] = 0xff;
      *(undefined4 *)(param_1 + 0x34) = 0x672c4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  return;
}

