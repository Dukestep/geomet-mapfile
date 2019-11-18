CLASS
 NAME "Rain 0.1-0.5"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 1000.1 AND [pixel] < 1000.5)
 STYLE
  COLOR 0 221 0
 END
END

CLASS
 NAME "Rain 0.5-1.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 1000.5 AND [pixel] < 1001.0)
 STYLE
  COLOR 0 153 0
 END
END

CLASS
 NAME "Rain 1.0-3.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 1001.0 AND [pixel] < 1003.0)
 STYLE
  COLOR 0 119 0
 END
END

CLASS
 NAME "Rain 3.0-6.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 1003.0 AND [pixel] < 1006.0)
 STYLE
  COLOR 0 68 0
 END
END

CLASS
 NAME "Rain 6.0-.."
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 1006.0 AND [pixel] < 1500.0)
 STYLE
  COLOR 0 34 0
 END
END


CLASS
 NAME "Rain-Snow 0.1-0.5"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 2000.1 AND [pixel] < 2000.5)
 STYLE
  COLOR 238 255 0
 END
END

CLASS
 NAME "Rain-Snow  0.5-1.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 2000.5 AND [pixel] < 2001.0)
 STYLE
  COLOR 238 204 0
 END
END

CLASS
 NAME "Rain-Snow  1.0-3.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 2001.0 AND [pixel] < 2003.0)
 STYLE
  COLOR 238 170 0
 END
END

CLASS
 NAME "Rain-Snow  3.0-6.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 2003.0 AND [pixel] < 2006.0)
 STYLE
  COLOR 238 136 0
 END
END

CLASS
 NAME "Rain-Snow  6.0-.."
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 2006.0 AND [pixel] < 2500.0)
 STYLE
 COLOR 238 102 0
 END
END


CLASS
 NAME "Ice-Pellets 0.1-0.5"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 3000.1 AND [pixel] < 3000.5)
 STYLE
 COLOR 255 170 255
 END
END

CLASS
 NAME "Ice-Pellets 0.5-1.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 3000.5 AND [pixel] < 3001.0)
 STYLE
  COLOR 255 102 255
 END
END

CLASS
 NAME "Ice-Pellets 1.0-3.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 3001.0 AND [pixel] < 3003.0)
 STYLE
 COLOR 255 0 255
 END
END

CLASS
 NAME "Ice-Pellets 3.0-6.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 3003.0 AND [pixel] < 3006.0)
 STYLE
 COLOR 204 0 204
 END
END

CLASS
 NAME "Ice-Pellets  6.0-.."
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 3006.0 AND [pixel] < 3500.0)
 STYLE
 COLOR 119 0 119
 END
END


CLASS
 NAME "Freezing-Rain 0.1-0.5"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 4000.1 AND [pixel] < 4000.5)
 STYLE
 COLOR 255 170 170
 END
END

CLASS
 NAME "Freezing-Rain 0.5-1.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 4000.5 AND [pixel] < 4001.0)
 STYLE
 COLOR 255 102 102
 END
END

CLASS
 NAME "Freezing-Rain 1.0-3.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 4001.0 AND [pixel] < 4003.0)
 STYLE
 COLOR 255 0 0
 END
END

CLASS
 NAME "Freezing-Rain 3.0-6.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 4003.0 AND [pixel] < 4006.0)
 STYLE
 COLOR 204 0 0
 END
END

CLASS
 NAME "Freezing-Rain  6.0-.."
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 4006.0 AND [pixel] < 4500.0)
 STYLE
 COLOR 119 0 0
 END
END


CLASS
 NAME "Snow 0.1-0.5"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 5000.1 AND [pixel] < 5000.5)
 STYLE
 COLOR 0 238 255
 END
END

CLASS
 NAME "Snow 0.5-1.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 5000.5 AND [pixel] < 5001.0)
 STYLE
 COLOR 0 119 204
 END
END

CLASS
 NAME "Snow 1.0-3.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 5001.0 AND [pixel] < 5003.0)
 STYLE
 COLOR 0 85 153
 END
END

CLASS
 NAME "Snow 3.0-6.0"
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 5003.0 AND [pixel] < 5006.0)
 STYLE
 COLOR 0 34 102
 END
END

CLASS
 NAME "Snow  6.0-.."
 GROUP "SIGPRECIPITATIONTYPE"
 EXPRESSION ([pixel] >= 5006.0 AND [pixel] < 5500.0)
 STYLE
 COLOR 0 0 51
 END
END