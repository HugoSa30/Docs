/*
 * Program: n42.bin
 * Function: FUN_001a5d38
 * Entry: 001a5d38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5d38(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = _DAT_003fbe70 + param_1 * 0x2c;
  iVar1 = (uint)*(byte *)(iVar2 + 2) * 0x18;
  pbVar3 = &UNK_003fbe48 + iVar1;
  (**(code **)(iVar2 + 0x10))(param_1,1);
  *pbVar3 = *pbVar3 & 0xef;
  (&UNK_003fbe49)[iVar1] = (&UNK_003fbe49)[iVar1] & 0xc0;
  (&UNK_003fbe5c)[iVar1] = 0x10;
  (&DAT_005ba9e8)[param_1] = (&DAT_005ba9e8)[param_1] | 8;
  if ((&UNK_003fbe59)[iVar1] != '\x06') {
    (&UNK_003fbe58)[iVar1] = DAT_00fa9e44;
    (&UNK_003fbe59)[iVar1] = 5;
  }
  *pbVar3 = *pbVar3 & 0xfd | 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

