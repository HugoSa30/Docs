/*
 * Program: n42.bin
 * Function: FUN_0009d1e8
 * Entry: 0009d1e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009d1e8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    puVar4 = &DAT_003fa158;
    puVar5 = &DAT_003fa164;
    uVar6 = _DAT_003fa138;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar5 = &DAT_003fa158;
    puVar4 = &DAT_003fa164;
    uVar6 = _DAT_003fa148;
  }
  uVar2 = (uint)*(ushort *)(puVar4 + 4);
  if (((*(ushort *)(puVar4 + 4) & 2) == 0) || (cVar1 = FUN_0009c8a0(param_1,0), cVar1 != '\0')) {
    if (((uVar2 & 4) == 0) ||
       (((iVar3 = *(int *)(puVar5 + 8), iVar3 == 0 || (iVar3 + 1 == *(int *)(puVar4 + 8))) ||
        (iVar3 + -1 == *(int *)(puVar4 + 8))))) {
      if (*(int *)(puVar4 + 8) == 0) {
        if (*(int *)(puVar5 + 8) == 0) {
          FUN_0009cbc0(uVar6,2);
        }
        else {
          FUN_0009cbc0(uVar6,*(int *)(puVar5 + 8) + 1);
        }
      }
      else {
        FUN_0009cbc0(uVar6,*(int *)(puVar4 + 8));
      }
      FUN_0009d00c(param_1);
    }
    else {
      FUN_000b126c(*(undefined4 *)(&DAT_003fa138 + param_1 * 0x10),0xa5a5);
      FUN_0009d00c(param_1);
    }
  }
  else {
    FUN_000b126c(*(undefined4 *)(&DAT_003fa138 + param_1 * 0x10),0xa5a5);
    FUN_0009d00c(param_1);
  }
  return;
}

