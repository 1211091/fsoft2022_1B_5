cmake_minimum_required(VERSION 3.21)
project(fsoft2022_1B_5)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS_DIR
        ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR
        ${PROJECT_SOURCE_DIR}/sources)
set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/exceptions)
set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/exceptions)
include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoNaoExisteException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoNaoExisteException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoDuplicadaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoDuplicadaException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/InformacaoInvalidaException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoInvalidaException.cpp)
add_executable(fsoft2022_1B_5 main.cpp headers/controllers/InformacaoNaoExisteException.h headers/model/teste.h headers/views/teste.h sources/controllers/teste.cpp sources/exceptions/InformacaoNaoExisteException.cpp sources/model/teste.cpp sources/views/teste.cpp headers/exceptions/InformacaoInvalidaException.h headers/exceptions/InformacaoDuplicadaException.h headers/exceptions/InformacaoNaoExisteException.h mock/teste.h mock/teste.cpp sources/exceptions/InformacaoDuplicada.cpp sources/exceptions/InformacaoInvalida.cpp)
