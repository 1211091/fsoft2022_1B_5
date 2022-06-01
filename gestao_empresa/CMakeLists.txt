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

set(PROJECT_HEADERS_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/views)
set(PROJECT_SOURCES_VIEWS_DIR
        ${PROJECT_SOURCES_DIR}/views)
include_directories(
        ${PROJECT_HEADERS_VIEWS_DIR}
        ${PROJECT_SOURCES_VIEWS_DIR})

set(VIEW_SOURCE_FILES
        ${PROJECT_HEADERS_VIEWS_DIR}/AdministradorView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/AdministradorView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ClienteView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ClienteView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/FuncionarioView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/FuncionarioView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ProdutosView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ProdutosView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/StockView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/StockView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
        ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/View.h
        ${PROJECT_SOURCES_VIEWS_DIR}/View.cpp)
add_executable(
        AplicacaoEmpresa
        main.cpp
        ${VIEWS_SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${EXCEPTIONS_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})
)
