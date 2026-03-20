/*
 * Program: n42.bin
 * Function: FUN_0009cbc0
 * Entry: 0009cbc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009cbc0(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uStack_1a;
  uint local_18;
  
  local_18 = param_2;
  iVar2 = param_1 + 4;
  uVar1 = 0;
  puVar3 = &uStack_1a;
  do {
    puVar3 = puVar3 + 1;
    FUN_000b126c(iVar2,*puVar3);
    iVar2 = iVar2 + 2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  iVar2 = param_1 + 8;
  uVar1 = 0;
  puVar3 = &uStack_1a;
  do {
    puVar3 = puVar3 + 1;
    FUN_000b126c(iVar2,*puVar3);
    iVar2 = iVar2 + 2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  local_18 = ~local_18;
  param_1 = param_1 + 0xc;
  uVar1 = 0;
  puVar3 = &uStack_1a;
  do {
    puVar3 = puVar3 + 1;
    FUN_000b126c(param_1,*puVar3);
    param_1 = param_1 + 2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

