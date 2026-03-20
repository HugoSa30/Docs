/*
 * Program: n42.bin
 * Function: FUN_0013dd78
 * Entry: 0013dd78
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013dd78(void)

{
  bool bVar1;
  
  if (B_autget == '\0') {
    if (((byte)(gangi - DAT_003fab36) == '\x01') || ((byte)(gangi - DAT_003fab36) == -1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (DAT_003fab3a == '\0') {
      if (DAT_003fab37 != '\0') {
        DAT_003fab37 = DAT_003fab37 + -1;
        if (DAT_003fab37 == '\0') {
          B_gangok = '\x01';
        }
        else {
          B_gangok = '\0';
        }
      }
    }
    else {
      DAT_003fab37 = TDKUPNOG;
      if (TDKUPNOG == '\0') {
        B_gangok = '\x01';
      }
      else {
        B_gangok = '\0';
      }
    }
    DAT_003fab36 = gangi;
    DAT_003fab3a = bVar1;
    if ((((B_gangok != '\0') && (bVar1)) && (B_brems == '\0')) &&
       ((VDKUPPLMN < vfzg && (anzgangw != 0xff)))) {
      anzgangw = anzgangw + 1;
    }
  }
  return;
}

