/*
 * Program: n42.bin
 * Function: FUN_0010c024
 * Entry: 0010c024
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c024(void)

{
  if (_DAT_003fbe28 == 0) {
    if (DAT_003fbe30 == '\0') {
      if (DAT_003fbe1a == '\x01') {
        FUN_0010bb18();
      }
      else {
        if (DAT_003fbe1a != '\x02') {
          if (DAT_003fbe1a == '\x04') {
            FUN_0010bb18();
          }
          else {
            if (DAT_003fbe1a != '\x05') {
              FUN_0010bff8(5);
              return;
            }
            FUN_0010bb84();
          }
          DAT_003fbd75 = 1;
          _DAT_003fbe24 = 0xf0c3a0;
          return;
        }
        FUN_0010bb84();
      }
      DAT_003fbd75 = 0;
    }
    else {
      DAT_003fbe30 = '\0';
      FUN_0010bd0c();
    }
    _DAT_003fbe24 = 0xf0bf8c;
  }
  return;
}

