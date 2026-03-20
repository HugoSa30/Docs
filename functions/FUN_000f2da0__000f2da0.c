/*
 * Program: n42.bin
 * Function: FUN_000f2da0
 * Entry: 000f2da0
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000f2da0(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x25) == '\x02') {
    cVar2 = '\0';
    *(undefined *)(iVar1 + 0x25) = 1;
  }
  else {
    cVar2 = -*(char *)(param_1 + 9);
    *(undefined *)(iVar1 + 0x25) = 0;
  }
  return (int)cVar2;
}

