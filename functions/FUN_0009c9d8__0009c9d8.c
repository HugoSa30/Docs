/*
 * Program: n42.bin
 * Function: FUN_0009c9d8
 * Entry: 0009c9d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c9d8(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)&DAT_003fa158;
    psVar2 = _DAT_003fa138;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar3 = (undefined4 *)&DAT_003fa164;
    psVar2 = _DAT_003fa148;
  }
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  if (*psVar2 == -0x5a5b) {
    *puVar3 = 1;
    return;
  }
  if (*psVar2 == -1) {
    if (psVar2[1] != -0x5a5b) {
      if (psVar2[1] == -1) {
        *puVar3 = 1;
        return;
      }
      *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 2;
    }
    iVar1 = FUN_0009c944(psVar2,puVar3 + 2);
    if (iVar1 == 1) {
      *puVar3 = 2;
      return;
    }
    if (iVar1 == 2) {
      *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 4;
      *puVar3 = 2;
      return;
    }
    if (iVar1 == 3) {
      if (psVar2[8] != -0x5a5b) {
        if (psVar2[8] == -1) {
          *puVar3 = 3;
          return;
        }
        *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 8;
      }
      if (psVar2[9] != -0x5a5b) {
        if (psVar2[9] != -1) {
          *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 0x10;
          *puVar3 = 5;
          return;
        }
        *puVar3 = 4;
        return;
      }
      *puVar3 = 5;
      return;
    }
    *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 0x100;
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 1;
  }
  *puVar3 = 1;
  return;
}

