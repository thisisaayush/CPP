##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=CPPProject
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :="C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace"
ProjectPath            :="C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject"
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/CPPProject
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=thaku
Date                   :=11/12/2024
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O0 -gdwarf-2 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_Constructors_PingPong.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_ArraysVectors_Array.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_ArraysVectors_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Rectangle.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Constructors_PingPong.cpp$(ObjectSuffix): src/Constructors/PingPong.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject/src/Constructors/PingPong.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Constructors_PingPong.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Constructors_PingPong.cpp$(PreprocessSuffix): src/Constructors/PingPong.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Constructors_PingPong.cpp$(PreprocessSuffix) src/Constructors/PingPong.cpp

$(IntermediateDirectory)/src_ArraysVectors_Array.cpp$(ObjectSuffix): src/ArraysVectors/Array.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject/src/ArraysVectors/Array.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_ArraysVectors_Array.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_ArraysVectors_Array.cpp$(PreprocessSuffix): src/ArraysVectors/Array.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_ArraysVectors_Array.cpp$(PreprocessSuffix) src/ArraysVectors/Array.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_ArraysVectors_main.cpp$(ObjectSuffix): src/ArraysVectors/main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject/src/ArraysVectors/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_ArraysVectors_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_ArraysVectors_main.cpp$(PreprocessSuffix): src/ArraysVectors/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_ArraysVectors_main.cpp$(PreprocessSuffix) src/ArraysVectors/main.cpp

$(IntermediateDirectory)/Rectangle.cpp$(ObjectSuffix): Rectangle.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/thaku/Desktop/Software Engineering Projects/CPP-Udemy/UdemyCPPWorkSpace/CPPProject/Rectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Rectangle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Rectangle.cpp$(PreprocessSuffix): Rectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Rectangle.cpp$(PreprocessSuffix) Rectangle.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


