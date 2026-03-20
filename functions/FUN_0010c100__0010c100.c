/*
 * Program: n42.bin
 * Function: FUN_0010c100
 * Entry: 0010c100
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c100(void)

{
  DAT_003fbe1a = '\0';
  FUN_0010c4d8();
  if (DAT_003fbe1a == '\0') {
    FUN_0010bff8(1);
    return;
  }
  if (DAT_003fbe1a == '\a') {
    if (*(char *)(_DAT_003fbdec + 6) == '\0') goto LAB_0010c178;
    if (*(char *)(_DAT_003fbdec + 6) != '\x01') {
      return;
    }
  }
  else {
    if (DAT_003fbe1a == '\b') {
LAB_0010c178:
      if (DAT_003fbe21 == '\0') {
        return;
      }
      FUN_0010bff8(3);
      return;
    }
    if (DAT_003fbe1a != '\t') {
      DAT_003fbe20 = 0;
      DAT_003fbe21 = 0;
      _DAT_003fbe24 = 0xf0c024;
      return;
    }
  }
  if (DAT_003fbe20 != '\0') {
    FUN_0010bff8(4);
  }
  return;
}

