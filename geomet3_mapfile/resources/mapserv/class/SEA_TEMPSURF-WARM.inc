CLASS
 NAME "200.00 - 293.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (200.00 <= [pixel] AND [pixel] < 293.15)
 STYLE
  COLORRANGE 0 0 127 0 0 127
  DATARANGE 200.00 293.15
 END
END
CLASS
 NAME "293.15 - 295.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (293.15 <= [pixel] AND [pixel] < 295.15)
 STYLE
  COLORRANGE 0 0 127 0 63 254
  DATARANGE 293.15 295.15
 END
END
CLASS
 NAME "295.15 - 297.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (295.15 <= [pixel] AND [pixel] < 297.15)
 STYLE
  COLORRANGE 0 63 254 51 253 203
  DATARANGE 295.15 297.15
 END
END
CLASS
 NAME "297.15 - 299.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (297.15 <= [pixel] AND [pixel] < 299.15)
 STYLE
  COLORRANGE 51 253 203 255 255 0
  DATARANGE 297.15 299.15
 END
END
CLASS
 NAME "299.15 - 301.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (299.15 <= [pixel] AND [pixel] < 301.15)
 STYLE
  COLORRANGE 255 255 0 254 50 0
  DATARANGE 299.15 301.15
 END
END
CLASS
 NAME "301.15 - 303.15"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (301.15 <= [pixel] AND [pixel] < 303.15)
 STYLE
  COLORRANGE 254 50 0 127 0 0
  DATARANGE 301.15 303.15
 END
END
CLASS
 NAME "303.15 - 400.00"
 GROUP "SEA_TEMPSURF-WARM"
 EXPRESSION (303.15 <= [pixel] AND [pixel] <= 400.00)
 STYLE
  COLORRANGE 127 0 0 127 0 0
  DATARANGE 303.15 400.00
 END
END