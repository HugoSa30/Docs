/*
 * Program: n42.bin
 * Function: FUN_000d06a8
 * Entry: 000d06a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d06a8(void)

{
  if (B_airbag == '\0') {
    if ((B_ins3cok == '\0') || (B_nmot == '\0')) {
      DAT_003fadf8 = DAT_003fadf8 & 0xfc;
    }
    else {
      if (ekpausc == 0) {
        DAT_003fadf8 = DAT_003fadf8 & 0xfc | 2;
      }
      else if (ekpausc == 1) {
        if ((DAT_003fadf8 >> 1 & 1) != 0) {
          DAT_003fadf8 = DAT_003fadf8 & 0xfe | 1;
        }
      }
      else if (ekpausc == 3) {
        if ((DAT_003fadf8 & 1) != 0) {
          B_airbag = '\x01';
        }
        DAT_003fadf8 = DAT_003fadf8 & 0xfd;
      }
      else {
        DAT_003fadf8 = DAT_003fadf8 & 0xfc;
      }
      if ((DAT_003fadf8 & 1) == 0) {
        DAT_003fadf4 = TCEKP;
      }
      else if (DAT_003fadf4 == '\0') {
        DAT_003fadf8 = DAT_003fadf8 & 0xfc;
      }
      else {
        DAT_003fadf4 = DAT_003fadf4 + -1;
      }
    }
  }
  return;
}

