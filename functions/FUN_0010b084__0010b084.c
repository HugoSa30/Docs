/*
 * Program: n42.bin
 * Function: FUN_0010b084
 * Entry: 0010b084
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0010b084(void)

{
  int iVar1;
  char cVar2;
  undefined auStack_10 [4];
  
  DAT_003fbd20 = 0;
  if (_DAT_003fbd34 != 0) {
    if (DAT_003fbd38 == '\x01') {
      iVar1 = (**_DAT_003fbd30)(auStack_10);
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          _DAT_003fbd34 = 0;
          return 0;
        }
        DAT_003fbd38 = '\x02';
      }
      if (*(char *)(_DAT_003fbd34 + 0x34) != '\0') {
        return _DAT_003fbd34;
      }
      FUN_0010aed0();
      goto LAB_0010b158;
    }
    if (DAT_003fbd38 != '\x02') {
      DAT_003fbd20 = 0;
      return _DAT_003fbd34;
    }
    cVar2 = (**(code **)(_DAT_003fbd34 + 0x2c))();
    if (cVar2 == '\0') {
      _DAT_003fbd34 = 0;
      return 0;
    }
    if (*(char *)(_DAT_003fbd34 + 0x34) != '\0') {
      return _DAT_003fbd34;
    }
  }
  FUN_0010adf0();
LAB_0010b158:
  FUN_0010afb0();
  return _DAT_003fbd34;
}

