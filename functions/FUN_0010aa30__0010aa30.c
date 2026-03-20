/*
 * Program: n42.bin
 * Function: FUN_0010aa30
 * Entry: 0010aa30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_0010aa30(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (param_1 - DAT_00f03658 & 0xff) * 0x14;
  iVar3 = _DAT_003faf14 + iVar5;
  cVar1 = (&UNK_003fae78)[*(byte *)(iVar3 + 0xd)];
  *(char *)(param_2 + 8) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = (uint)*(byte *)(iVar3 + 0xe) + (uint)*(byte *)(iVar3 + 0xd) * 0x10 & 0xff;
    iVar3 = FUN_0010a8ec(iVar3 + 8);
    puVar4 = (undefined *)
             (_DAT_003faf20 + ((uint)(byte)(&UNK_003fae84)[uVar2 * 2] - (uint)DAT_00f03658));
    if (iVar3 == 0) {
      *puVar4 = 0;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 8;
    }
    else {
      *puVar4 = 1;
    }
    iVar3 = FUN_0010ab7c(_DAT_003faf14 + iVar5 + 8,param_2,param_3,param_4);
    if (iVar3 == 0) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xf7 | 0x10;
    }
    else if ((*(char *)(_DAT_003faf14 + iVar5 + 1) == '\x01') &&
            ((byte)(&UNK_003fae84)[uVar2 * 2] != param_1)) {
      (&UNK_003fae84)[uVar2 * 2] = (char)param_1;
      (&UNK_003fae85)[uVar2 * 2] = 2;
    }
  }
  return *(undefined *)(param_2 + 8);
}

