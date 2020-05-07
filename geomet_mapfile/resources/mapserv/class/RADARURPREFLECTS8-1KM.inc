CLASS
 NAME "10.50 - 17.00 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (4 <= [pixel] AND [pixel] < 10.5)
 STYLE
  COLOR 153 255 153
 END
END
CLASS
 NAME "17.00 - 21.00 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (10.5 <= [pixel] AND [pixel] < 14.5)
 STYLE
  COLOR 051 255 051
 END
END
CLASS
 NAME "21.00 - 29.75 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (14.5 <= [pixel] AND [pixel] < 22.25)
 STYLE
  COLOR 000 153 000
 END
END
CLASS
 NAME "29.75 - 36.50 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (22.25 <= [pixel] AND [pixel] < 30)
 STYLE
  COLOR 000 102 000
 END
END
CLASS
 NAME "36.50 - 43.00 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (30 <= [pixel] AND [pixel] < 36.5)
 STYLE
  COLOR 255 102 204
 END
END
CLASS
 NAME "43.00 - 48.00 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (36.5 <= [pixel] AND [pixel] < 41.5)
 STYLE
  COLOR 153 051 204
 END
END
CLASS
 NAME "48.00 - 54.50 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (41.5 <= [pixel] AND [pixel] < 48)
 STYLE
  COLOR 102 000 153
 END
END
CLASS
 NAME ">= 54.50 (dBZ)"
 GROUP "RADARURPREFLECTS8"
 EXPRESSION (48 <= [pixel] AND [pixel] <= 59.75)
 STYLE
  COLOR 051 000 102
 END
END