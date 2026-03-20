/*
 * Program: n42.bin
 * Function: FUN_0013eb14
 * Entry: 0013eb14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013eb14(void)

{
  byte bVar1;
  byte *unaff_r30;
  undefined *unaff_r31;
  double in_f31;
  
  if ((float)in_f31 <= _DAT_0001cb74) {
    if (_DAT_0001cb40 <= (float)in_f31) {
      *unaff_r31 = (char)(int)in_f31;
    }
    else {
      *unaff_r31 = 0;
    }
  }
  else {
    *unaff_r31 = 0xff;
  }
  bVar1 = func_0xff2187cc(&DAT_001d14c8,nmot);
  DAT_003fc07a = bVar1 < *unaff_r30;
  return;
}

