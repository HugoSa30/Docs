/*
 * Program: n42.bin
 * Function: FUN_0015352c
 * Entry: 0015352c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0015352c(void)

{
  if (B_famls == '\0') {
    if (B_nl10 == '\0') {
      if ((B_nachln == '\0') && (B_nmin == '\0')) {
        taml = func_0xff2187cc(&TAMLSNH,tamlausab);
        if (TAMLSMX < taml) {
          taml = TAMLSMX;
        }
        else if (taml < TAMLSMN) {
          taml = TAMLSMN;
        }
      }
      else {
        taml = 0;
      }
    }
    else {
      taml = tamlnl;
    }
  }
  else {
    taml = tamldia;
  }
  if (B_nl10 == '\0') {
    fqml = 100;
  }
  else {
    fqml = 10;
  }
  return;
}

