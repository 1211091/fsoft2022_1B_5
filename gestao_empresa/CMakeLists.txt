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
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/InformacaoInvalidaException.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/AdministradorView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/AdministradorView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ClienteView.h
        ${PROJECT_HEADERS_VIEWS_DIR}/FuncionarioView.h
        ${PROJECT_HEADERS_VIEWS_DIR}/ProdutosView.h
        ${PROJECT_HEADERS_VIEWS_DIR}/StockView.h
        ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
        ${PROJECT_HEADERS_VIEWS_DIR}/View.h
        )
add_executable(fsoft2022_1B_5 main.cpp headers/exceptions/InformacaoNaoExisteException.h headers/views/teste.h sources/exceptions/InformacaoNaoExisteException.cpp headers/exceptions/InformacaoInvalidaException.h headers/exceptions/InformacaoDuplicadaException.h headers/exceptions/InformacaoNaoExisteException.h sources/exceptions/InformacaoDuplicada.cpp sources/exceptions/InformacaoInvalida.cpp sources/views/View.cpp)
