/*
 * Program: n42.bin
 * Function: FUN_000956d4
 * Entry: 000956d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000956d4(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = _DAT_003f9f64;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    iVar2 = 2;
  }
  else {
    if (cVar1 == '\x03') {
      param_1[2] = *(char *)(_DAT_003f9f64 + 2);
      param_1[3] = *(char *)(iVar2 + 3);
      return;
    }
    if (cVar1 != '\x04') {
      return;
    }
    param_1[2] = *(char *)(_DAT_003f9f64 + 2);
    param_1[3] = *(char *)(iVar2 + 3);
    iVar2 = 4;
  }
  param_1[1] = *(char *)(_DAT_003f9f64 + iVar2);
  return;
}

