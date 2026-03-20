/*
 * Program: n42.bin
 * Function: FUN_001a5184
 * Entry: 001a5184
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5184(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (DAT_003fbd88 != '\0') {
    DAT_003fbd88 = '\0';
    _DAT_003fbdcc = _DAT_003fbd84;
    DAT_003fbd5e = *(undefined *)(_DAT_003fbd84 + 10);
    if (DAT_003fbd5b == '\0') {
      pcVar1 = *(char **)(_DAT_003fbd84 + 4);
      if ((*pcVar1 == '\x7f') && (pcVar1[2] == DAT_003fbd64)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      (**_DAT_003fbd60)(pcVar1,*(undefined2 *)(_DAT_003fbd84 + 8),0,0,uVar2);
      *(undefined *)(_DAT_003fbdcc + 0xb) = 2;
      _DAT_003fbdd0 = &DAT_003fbd7c;
      _DAT_003fbdd4 = _DAT_003fbdd8;
      _DAT_003fbdd8 = 0xfa5280;
    }
  }
  return;
}

